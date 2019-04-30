#This program is intended to calculate the area of circle or triangle.
#The shape and dimensions are defined by the input of a user from bash

print """ Welcome to Area calculator
This program will calculate the area of a shape of your choice.
"""

option = raw_input('Enter C for Circle or T for Triangle: ')

option = option.upper()

if option == 'C':
    radius = raw_input('Please enter radius: ')
    radius = float(radius)
    area = radius ** 2 * 3.14
    print 'The are of a %.1f radius circle is %.1f' % (radius, area)
elif option == 'T':
    base = raw_input
    ('Enter the base of the triangle: ')
    base = float(base)

    height = raw_input('Enter the height of triangle: ')
    height = float(height)
    area = base * height / 2

    print ('The area of of the triangle is %.1f') % height
else:
    print 'Invalid character'

print 'Calculation completed, Goodbye!'
