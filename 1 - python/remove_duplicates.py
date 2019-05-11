def remove_duplicates(list):
  unique_list = []

  for i in list:
    found_in_list = False

    for j in unique_list:
      if i == j:
        found_in_list = True

    if found_in_list == False:
      unique_list.append(i)

  return unique_list

print remove_duplicates([1, 1, 2, 2])
