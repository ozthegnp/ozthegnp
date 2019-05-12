# RGB HEX converter.
#For this code blame: Oscar Mateo

#init general error message
invalid_msg = "Invalid input!"

### Main function of the converter
def convert():
  #looping until exiting with x
  while True:
    #prompting for options
    option =  raw_input("""
   Enter 1 to convert RGB to HEX.
   Enter 2 to convert HEX to RGB
   Enter X to Exit:
             """)
    #calling functions and error handling
    if option == '1':
      print "RGB to Hex..."
      rgb_hex()
    elif option == '2':
      print "Hex to RGB..."
      hex_rgb()
    elif option == 'x' or option == 'X':
      break
    else:
      print invalid_msg

### Function of RGB to Hex
def rgb_hex():
  # User input of RGB colors
  red = int(raw_input("Please enter(R): "))
  if red < 0 or red > 255:
    print invalid_msg
    rgb_hex()

  green = int(raw_input("Please enter(G): "))
  if green < 0 or green > 255:
    print invalid_msg
    rgb_hex()

  blue = int(raw_input("Please enter(B): "))
  if blue < 0 or blue > 255:
    print invalid_msg
    rgb_hex()

  #converting by bitwise shifting
  val = (red << 16) + (green << 8) + blue
  print hex(val).upper()[2:]

### Function of Hex to RGB
def hex_rgb():
  hex_val = raw_input("Enter hex value: ")
  # Error handle for invalid input
  if len(hex_val) != 6:
    print invalid_msg
  else:
    hex_val = int(hex_val, 16)

  #hex conversion
  two_hex_digits = 2 ** 8 #constant of two hex digits

  blue = hex_val % two_hex_digits # using the remainders starting form blue
  hex_val = hex_val >> 8
  green = hex_val % two_hex_digits
  hex_val = hex_val >> 8
  red = hex_val % two_hex_digits

  #printing result of 3 RGB value
  print "R: " + str(red)
  print "G: " + str(green)
  print "B: " + str(blue)

#Finally calling the function
convert()
