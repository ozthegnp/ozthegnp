def anti_vowel(text):
  upper = list(text.upper())
  length = len(text)
  text = list(text)

  i = 0
  while i < length:
    if upper[i] == 'A' or upper[i] == 'E' or \
       upper[i] == 'I' or upper[i] == 'O' or \
       upper[i] == 'U':
      upper.pop(i)
      text.pop(i)
      length -= 1
    else:
      i += 1
  return "".join(text)

print anti_vowel('Hey You!')
