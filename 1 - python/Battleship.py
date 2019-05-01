# BattleShip Game by Oscar Mateo

# Importing randint to determine ship's location
from random import randint

# Initializing list for empty board
board = []

#Filling up layout of bourd with 'O'-s
for x in range(5):
  board.append(["O"] * 5)

#printing function with board input
def print_board(board):
  for row in board:
    print " ".join(row)

#starting the game
print """
 === BATTLESHIP ===
 Welcome to the game!
"""
print_board(board)

#Creating random location of ship
def random_row(board):
  return randint(0, len(board) - 1)

def random_col(board):
  return randint(0, len(board[0]) - 1)

ship_row = random_row(board)
ship_col = random_col(board)

# The game start in a for loop, the player has 4 guesses
for turn in range(4):
  print "This is turn %d!" % turn
  guess_row = int(raw_input("Guess Row: "))
  guess_col = int(raw_input("Guess Col: "))


  if guess_row == ship_row and guess_col == ship_col:
    print "Congratulations! You sunk my battleship!"
    break
  else:
    if (guess_row < 0 or guess_row > 4) or (guess_col < 0 or guess_col > 4):
      print "Oops, that's not even in the ocean."
    elif(board[guess_row][guess_col] == "X"):
      print "You guessed that one already."
    else:
      print "You missed my battleship!"
      board[guess_row][guess_col] = "X"
    print ""
    print_board(board)
    if turn == 3:
      print "Game Over! You couldn't gues it in 4 turns, try again."
