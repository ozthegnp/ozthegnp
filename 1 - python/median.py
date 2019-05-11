def median(numbers):
  #sort numbers list
  numbers = sorted(numbers)
  length = len(numbers)
  #determine size of list and calculating median accordingly
  if len(numbers) % 2 == 1:
    return numbers[length / 2]
  else:
    return (numbers[length / 2 - 1] + numbers[length / 2]) / float(2)

print median([9, 1, 3, 4, 5, 6, 7, 8])
