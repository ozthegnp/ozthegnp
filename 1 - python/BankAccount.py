class BankAccount(object):
  balance = 0
  def __init__(self, name):
    self.name = name

  def __repr__(self):
    return self.name + "'s balance: ${:.2f}".format(self.balance)

  # SHOWBALANCE METHOD
  def show_balance(self):
    print self.name + \
  "'s balance: ${:.2f}".format(self.balance)

  # DEPOSIT METHOD
  def deposit(self, amount):
    if amount <= 0:
      print "Invalid deposit"
      return
    else:
      print "You are depositing ${:.2f}".format(amount)
      self.balance += amount
      self.show_balance()

  # WITHDRAW METHOD
  def withdraw(self, amount):
    if amount > self.balance:
      print "Insufficient balance"
      return
    elif amount <= 0:
      print "Invalid withdrawal"
      return
    else:
      print "You are withdrawing ${:.2f}".format(amount)
      self.balance -= amount
      self.show_balance()


#Testing functionalities
my_account = BankAccount('Oscar')
print my_account
my_account.show_balance()
my_account.deposit(2000)
my_account.withdraw(1000)
print my_account
