sample = ['GTA','GGG','CAC']

with open("output.txt", "w") as my:
  my_list = range(10)
  for item in my_list:
    my.write(str(item)+ "\n")


def read_dna(dna_file):
  dna_data = ""
  with open(dna_file, "r") as f:
    for line in f:
      dna_data += line
  return dna_data

def dna_codons(dna):
  codons = []
  for i in range(0, len(dna), 3):
    if (i + 3) < len(dna):
      codons.append(dna[i:i + 3])
  return codons


print dna_codons(read_dna("suspect1.txt"))
