lloyd = {
  "name": "Lloyd",
  "homework": [],
  "quizzes": [],
  "tests": []
}
alice = {
  "name": "Alice",
  "homework": [100.0, 92.0, 98.0, 100.0],
  "quizzes": [82.0, 83.0, 91.0],
  "tests": [89.0, 97.0]
}
tyler = {
  "name": "Tyler",
  "homework": [0.0, 87.0, 75.0, 22.0],
  "quizzes": [0.0, 75.0, 78.0],
  "tests": [100.0, 100.0]
}

lloyd["homework"] = [90., 97., 75., 92.]
lloyd["quizzes"] = [88., 40., 94.]
lloyd["tests"] = [75., 90.]

students = [lloyd, alice, tyler]

# Average function
def average(numbers):
  total = float(sum(numbers))
  return total/len(numbers)

# Print all student info
def print_all_student_info():
    for student in students:
        print student["name"]
        print student["homework"]
        print student["quizzes"]
        print student["tests"]

#Get weighed average for each student
def get_average(student):
  homework = average(student["homework"])
  quizzes = average(student["quizzes"])
  tests = average(student["tests"])
  return .1 * homework + .3 * quizzes + .6 * tests

# Letter grade function
def get_letter_grade(score):
  if score > 89:
    return "A"
  elif score > 79:
    return "B"
  elif score > 69:
    return "C"
  elif score > 59:
    return "D"
  else:
    return "F"

print get_letter_grade(get_average(alice))
