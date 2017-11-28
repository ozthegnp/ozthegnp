#include <stdio.h>

    //TODO: write a function which filters out the odd elements of an integer array
    //do it in the original array
    //your return value should be the real size of the filtered array
    //print out the filtered array's elements

int assort_odd_elements(int *array, int size);

int main(void)
{
	int num_array[] = {8, 7, 9, 20, 3, 81, 79, 66};

    int new_size = assort_odd_elements(num_array, sizeof(num_array) / sizeof(int));
	printf("Size of new array: %d\n The elements are:", new_size);

	for(int i = 0; i < new_size; i++){
        printf("%d, ", num_array[i]);
	}

    return 0;
}

int assort_odd_elements(int *array, int size)
{
    int new_arr_pos = 0;
    for(int i = 0; i < size; i++){
        if(array[i] % 2 == 0){
        array[new_arr_pos] = array[i];
        new_arr_pos++;
        }
    }
    return new_arr_pos;

}
