class BankAccount(object):
  balance = 0
  def __init__(self, name):
    self.name = name

  def __repr__(self):
    return self.name + "'s balance: ${:.2f}".format(self.balance)

  def show_balance(self):
    print self.name + \
  "'s balance: ${:.2f}".format(self.balance)

  def deposit(self, amount):

    if amount <= 0:
      print "Invalid deposit"
      return
    else:
      print "You are depositing ${:.2f}".format(amount)
      self.balance += amount
      self.show_balance()

hello = BankAccount('Oscar')
hello.show_balance()
hello.deposit(2)
