#Creating stock in dictionary
stock = {
  "banana": 6,
  "apple": 0,
  "orange": 32,
  "pear": 15
}

#Addin prices in dicitionary
prices = {
  "banana": 4,
  "apple": 2,
  "orange": 1.5,
  "pear": 3
}

def compute_bill(food):
# Compute_bill function
#input: a list a food item which is included in dictionary
#output: the total prices of items purchased
  total = 0
  for item in food:
    if stock[item] > 0:
      total = total + prices[item]
      stock[item] -= 1
      print 'You have bought a(n): %s' % item
    else:
      print 'o-oh, we ran out of: %s' % item
  return total

print compute_bill(['banana', 'orange', 'pear'])
print compute_bill(['banana', 'apple', 'pear'])
