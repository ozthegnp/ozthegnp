invalid_msg = "Invalid input!"

def rgb_hex():
  red = int(raw_input("Please enter(R): "))
  if red < 0 or red > 255:
    print invalid_msg

  green = int(raw_input("Please enter(G): "))
  if green < 0 or green > 255:
    print invalid_msg

  blue = int(raw_input("Please enter(B): "))
  if blue < 0 or blue > 255:
    print invalid_msg

  val = red << 16 + green << 8 + blue

  print hex(val).upper()[2:]

def hex_rgb():
  hex_val = raw_input("Enter hex value: ")
  if len(hex_val) != 6:
    print invalid_msg
  else:
    hex_val = int(hex_val, 16)

  two_hex_digits = 2 ** 8
  blue = hex_val % two_hex_digits
  hex_val = hex_val >> 8
  green = hex_val % two_hex_digits
  hex_val = hex_val >> 8
  red = hex_val % two_hex_digits
  print str(red)
  print str(green)
  print str(blue)

def convert():
  while True:
    option =  raw_input("""
   Enter 1 to convert RGB to HEX.
   Enter 2 to convert HEX to RGB
   Enter X to Exit:
             """)
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


convert()
