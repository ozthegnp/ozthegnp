#create dictionary for prices
prices = {
  "banana": 4,
  "apple": 2,
  "orange": 1.5,
  "pear": 3
}

#create dictionary for stock
stock = {
  "banana": 6,
  "apple": 0,
  "orange": 32,
  "pear": 15
}

#printing out all prices and stock
for key in prices:
  print '%s price: %s stock: %s' % (key, prices[key], stock[key])

total = 0

#summarizing profit potential
for key in prices:
  temp_total = prices[key] * stock[key]
  print temp_total
  total += temp_total

print total
