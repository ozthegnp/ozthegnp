/*
    * TASK SUMMARY:
    * You need to implement a system which simulates a railway level crossing.
    *
    * SPECIFICATION:
    * 1. The initial state of the system is OPEN, so it allows cars passing. In this state
    *    the LED_GREEN should be flashing with 0.5Hz, 50% duty cycle
    * 2. When the system gets a signal that a train is approaching the crossing (blue
    *    button click) it has to enter into SECURING state. In SECURING state the system
    *    has to close the barrier which this takes exactly 5 seconds. In this state the
    *    LED_GREEN should be flashing with 1Hz, 50% duty cycle. During this time the system
    *    should not react to any further signal (blue button click).
    * 3. Once the barrier is down the system enters into SECURED state. In this state the
    *    LED_GREEN is turned constantly off.
    * 4. When the system gets a signal that a train has left the crossing (blue button
    *    click) it switches to OPENING state: lifts the barrier which takes exactly 6
    *    seconds (it's a heavy barrier so it takes more time to lift). In this state the
    *    LED_GREEN is flashing with 1Hz, 50% duty cycle. During this time the system
    *    should not react to any further signal (blue button click). Once the barrier
    *    is up, the system get's back to it's initial, OPEN state (point 1.).
    *
    * NON FUNCTIONAL REQUIREMENTS:
    * 1. You cannot read the state of the blue button, use interrupts!
    * 2. You should use at least 1 timer peripheral
    * 3. Try to avoid the use of blocking waiting mechanisms (like HAL_Delay())
    * 4. Using PWM on LED_GREEN is possible, but not required. Note that you have no
    *    timer channel to LED_GREEN, so to drive it from PWM you should turn on the LED
    *    in every timer period end interrupt, and turn it off in every PWM pulse end
    *    interrupt.
    * 5. When you enter to any state, you should report this on USART1 peripheral. You
    *    can use BSP_COM_Init() to initialize this, and a serial monitor to read these
    *    reports. It should look something like this after reset and a train crossing:
    *
    *    Entered in OPEN state         // some time later a click comes
    *    Entered in SECURING state
    *    Entered in SECURED state      // some time later a click comes
    *    Entered in OPENING state
    *    Entered in OPEN state
    */


/* Includes ------------------------------------------------------------------*/
#include "main.h"
/** @addtogroup STM32F7xx_HAL_Examples
* @{
*/

/** @addtogroup Templates
* @{
*/

/* Private typedef -----------------------------------------------------------*/
TIM_HandleTypeDef    	TimHandle;          // type definition of timer handle
GPIO_InitTypeDef 		led;				// type definition of gipo led
GPIO_InitTypeDef 		button;             // type definition of gipo button

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef uart_handle; // uart port typedef
volatile uint32_t button_status = 0; // Checks how many times you have a valid button push
volatile uint32_t timer_status = 0; // counts how many periods has passed after button press

/* Private function prototypes -----------------------------------------------*/
void My_led_init(GPIO_TypeDef *port, uint32_t pin_number); // configures the led
void My_button_init(void); // configures the button
void My_timer_init(/*GPIO_TypeDef *port, uint32_t pin_number*/); // configures the timer to interrupt
void My_status_print(); // prints out the status of train intersection

#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

/**
* @brief  Main program
* @param  None
* @retval None
*/
int main(void) {
 /* This project template calls firstly two functions in order to configure MPU feature
  and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
  These functions are provided as template implementation that User may integrate
  in his application, to enhance the performance in case of use of AXI interface
  with several masters. */

 /* Configure the MPU attributes as Write Through */
 MPU_Config();

 /* Enable the CPU Cache */
 CPU_CACHE_Enable();

 /* STM32F7xx HAL library initialization:
  - Configure the Flash ART accelerator on ITCM interface
  - Configure the Systick to generate an interrupt each 1 msec
  - Set NVIC Group Priority to 4
  - Low Level Initialization
  */
 HAL_Init();

 /* Configure the System clock to have a frequency of 216 MHz */
 SystemClock_Config();

 /* Add your application code here
  */

 //opening UART
 uart_handle.Init.BaudRate = 115200;
 uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
 uart_handle.Init.StopBits = UART_STOPBITS_1;
 uart_handle.Init.Parity = UART_PARITY_NONE;
 uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
 uart_handle.Init.Mode = UART_MODE_TX_RX;

 BSP_COM_Init(COM1, &uart_handle);

 //Enabling The led and Timer
 __HAL_RCC_GPIOI_CLK_ENABLE();  	 // enable the GPIOI clock
 __HAL_RCC_TIM1_CLK_ENABLE();  	 // we need to enable the TIM1

 //Initializing the led and timer with interrupts
 My_led_init(GPIOI, GPIO_PIN_1);
 My_timer_init();
 My_button_init();//initializing button in interrupt mode

 //welcome screen
 printf("\n-----------------WELCOME-----------------\r\n");
 printf("**********IN TRAIN CROSSING SYSTEM*********\r\n\n");

 while (1) {
   My_status_print();//monitors and prints the bar status
 }

}


/* Private interrupts ---------------------------------------------------------*/

void TIM1_UP_TIM10_IRQHandler() {

 HAL_TIM_IRQHandler(&TimHandle);

}

//callback function of interrupt of the timer witch controls the blinking
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){

 if(button_status != 0){ // It only counts if the button is pushed

   if(timer_status != 20 && timer_status != 45){ // at cycle 20 the clock stops since 5 second has passed by, after repressing the button 6 second will pass by until 44 cycle;
     timer_status++; //counts periods of clock
   }
 }

 if(timer_status == 45){ // at cycle 44 6 second has passed by, gives an interrupt to change period.
   timer_status = 0; //timer set back
   button_status = 2; // push button to status 2
   HAL_GPIO_EXTI_Callback(GPIO_PIN_11);

 }

 if(timer_status == 20){
   HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_RESET); // turns of the led if clock is at cycle 20
 } else {
   HAL_GPIO_TogglePin(GPIOI, GPIO_PIN_1); // makes the light blink
 }

}

void EXTI15_10_IRQHandler() {

 HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);

}

//callback function of button interrupt
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){
 if(timer_status == 0 || timer_status == 20){ // only allows to change the button state when the timer has stopped blinking
   if(button_status == 0){
     TimHandle.Init.Period			 = 210; // makes the light blink slower
     HAL_TIM_Base_Init(&TimHandle);
     HAL_TIM_Base_Start_IT(&TimHandle);
     button_status = 1;

   }else if(button_status == 1){
     button_status = 2;
     timer_status = 21;
   } else if(button_status == 2){
     TimHandle.Init.Period			 = 420; //makes the light blink faster at its original pace
     HAL_TIM_Base_Init(&TimHandle);
     HAL_TIM_Base_Start_IT(&TimHandle);
     button_status = 0;
   }
 }
}

/* Private functions ---------------------------------------------------------*/

void My_led_init(GPIO_TypeDef *port, uint32_t pin_number) {

 led.Pin = pin_number;            // this is about PIN 1
 led.Mode = GPIO_MODE_OUTPUT_PP; // Configure as output with push-up-down enabled
 led.Pull = GPIO_PULLUP;        // the push-up-down should work as pull up
 led.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

 HAL_GPIO_Init(port, &led);      // initialize the pin on GPIOI port with HAL
 HAL_GPIO_WritePin(port, pin_number, GPIO_PIN_RESET);

}

void My_button_init(void){ // configures the button
	 BSP_PB_Init(BUTTON_WAKEUP, BUTTON_MODE_EXTI);

}

void My_timer_init(/*GPIO_TypeDef *port, uint32_t pin_number*/) {

   TimHandle.Instance               = TIM1;
   TimHandle.Init.Period            = 420;
   TimHandle.Init.Prescaler         = 0xFFFF;
   TimHandle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
   TimHandle.Init.CounterMode       = TIM_COUNTERMODE_UP;

   HAL_TIM_Base_Init(&TimHandle);
   HAL_TIM_Base_Start_IT(&TimHandle);

   HAL_NVIC_SetPriority(TIM1_UP_TIM10_IRQn, 0x0F, 0x00);
   HAL_NVIC_EnableIRQ(TIM1_UP_TIM10_IRQn);

}

void My_status_print(){

 if(timer_status == 1){

	   printf("Entered SECURING state\r\n");

	   while(timer_status == 1){
	   }

 } else if(timer_status == 20){

	   printf("Entered SECURED state\r\n");

	   while(timer_status == 20){
	   }

 } else if(timer_status == 21){

	   printf("Entered OPENING state\r\n");

	   while(timer_status == 21){
	   }

 } else if(timer_status == 0){

	   printf("Entered OPENED state\r\n");

	   while(timer_status == 0){
	   }
 }
}

/**
* @brief  Retargets the C library printf function to the USART.
* @param  None
* @retval None
*/
PUTCHAR_PROTOTYPE {
 /* Place your implementation of fputc here */
 /* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
 HAL_UART_Transmit(&uart_handle, (uint8_t *) &ch, 1, 0xFFFF);

 return ch;
}

/**
* @brief  System Clock Configuration
*         The system Clock is configured as follow :
*            System Clock source            = PLL (HSE)
*            SYSCLK(Hz)                     = 216000000
*            HCLK(Hz)                       = 216000000
*            AHB Prescaler                  = 1
*            APB1 Prescaler                 = 4
*            APB2 Prescaler                 = 2
*            HSE Frequency(Hz)              = 25000000
*            PLL_M                          = 25
*            PLL_N                          = 432
*            PLL_P                          = 2
*            PLL_Q                          = 9
*            VDD(V)                         = 3.3
*            Main regulator output voltage  = Scale1 mode
*            Flash Latency(WS)              = 7
* @param  None
* @retval None
*/
static void SystemClock_Config(void) {
 RCC_ClkInitTypeDef RCC_ClkInitStruct;
 RCC_OscInitTypeDef RCC_OscInitStruct;

 /* Enable HSE Oscillator and activate PLL with HSE as source */
 RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
 RCC_OscInitStruct.HSEState = RCC_HSE_ON;
 RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
 RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
 RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
 RCC_OscInitStruct.PLL.PLLM = 25;
 RCC_OscInitStruct.PLL.PLLN = 432;
 RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
 RCC_OscInitStruct.PLL.PLLQ = 9;
 if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
   Error_Handler();
 }

 /* activate the OverDrive to reach the 216 Mhz Frequency */
 if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
   Error_Handler();
 }

 /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
  clocks dividers */
 RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
     | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
 RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
 RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
 RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
 RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV8;
 if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
   Error_Handler();
 }
}

/**
* @brief  This function is executed in case of error occurrence.
* @param  None
* @retval None
*/
static void Error_Handler(void) {
 /* User may add here some code to deal with this error */
 while (1) {
 }
}

/**
* @brief  Configure the MPU attributes as Write Through for SRAM1/2.
* @note   The Base Address is 0x20010000 since this memory interface is the AXI.
*         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
* @param  None
* @retval None
*/
static void MPU_Config(void) {
 MPU_Region_InitTypeDef MPU_InitStruct;

 /* Disable the MPU */
 HAL_MPU_Disable();

 /* Configure the MPU attributes as WT for SRAM */
 MPU_InitStruct.Enable = MPU_REGION_ENABLE;
 MPU_InitStruct.BaseAddress = 0x20010000;
 MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
 MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
 MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
 MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
 MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
 MPU_InitStruct.Number = MPU_REGION_NUMBER0;
 MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
 MPU_InitStruct.SubRegionDisable = 0x00;
 MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

 HAL_MPU_ConfigRegion(&MPU_InitStruct);

 /* Enable the MPU */
 HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
* @brief  CPU L1-Cache enable.
* @param  None
* @retval None
*/
static void CPU_CACHE_Enable(void) {
 /* Enable I-Cache */
 SCB_EnableICache();

 /* Enable D-Cache */
 SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
* @brief  Reports the name of the source file and the source line number
*         where the assert_param error has occurred.
* @param  file: pointer to the source file name
* @param  line: assert_param error line source number
* @retval None
*/
void assert_failed(uint8_t* file, uint32_t line)
{
 /* User can add his own implementation to report the file name and line number,
  ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

 /* Infinite loop */
 while (1)
 {
 }
}
#endif

/**
* @}
*/

/**
* @}
*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
