def censor(text, word):

  split_text = text.split()

  for i in range(len(split_text)):
    if split_text[i] == word:
      split_text[i] = '*' * len(word)

  return " ".join(split_text)

print censor('what the marshmello', 'marshmello')
