def remove_duplicates(input_list):
  #init output list
  unique_list = []

  #iterating through input list
  for i in input_list:
    found_in_list = False # setting flag, assuming,that the element did not occur yet

    for j in unique_list:
      if i == j:
        found_in_list = True #if the element did occure already, setting flag to true

    #in case it did not occur in the unique list, adding it to the unique list.
    if found_in_list == False:
      unique_list.append(i)

  return unique_list

print remove_duplicates(['hello', 'hello', 2, 2])
