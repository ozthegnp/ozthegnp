def purify(numbers):

  count = 0
  while count < len(numbers):
    if numbers[count] % 2 == 1:
      numbers.pop(count)
    else:
      count += 1

  return numbers
      
