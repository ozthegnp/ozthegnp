#this function has two input: a sequence and and item.
#it will return how many times the item occurs in the sequence

def count(sequence, item):
  count = 0
  for i in sequence:
    if i == item:
      count += 1
  return count

print count([1, 1, 1, 3, 4], 1)
