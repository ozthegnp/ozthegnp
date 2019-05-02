from random import randint

# Generates a number from 1 through 10 inclusive
random_number = randint(1, 10)
print random_number

# Set number of tries
guesses_left = 3

print "Welcome to number guess game!"
while guesses_left > 0:
  guess = int(raw_input("Guess the number: "))
  if guess == random_number:
    print "You win!"
    break
  guesses_left -= 1
else:
  print "You lose."
