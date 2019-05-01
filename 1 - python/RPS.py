#====RPS GAME===== This is my Rock Paper Scissors game. The program takes an input from the player, this could either be Rock, Paper or Scissors. Afer this the program will randomly select one of the items below, compare it to the user's input an determine the winner. Good Luck: Oscar Mateo

from random import randint

options = ['Rock', 'Paper', 'Scissors']

message = {
  'tie': 'Yawn it\'s a tie!',
  'won': 'Yay you won',
  'lost': 'Aww you lost! :('
}

def decide_winner(user_choice, computer_choice):
  print 'You choice is: %s' % user_choice
  print 'The compter\'s choice is: %s' % computer_choice
  if user_choice == computer_choice:
    print message['tie']
  elif user_choice == options[0] and computer_choice == options[2]:
    print message['won']
  elif user_choice == options[1] and computer_choice == options[0]:
    print message['won']
  elif user_choice == options[2] and computer_choice == options[1]:
    print message['won']
  else:
    print message['lost']
    
