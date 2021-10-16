# getting the users input, usually the marks will be from 1-100
grade = input("Enter your marks:")
result = float(grade)  # the user input is converted into float type
if result < 25:
    print("F")
elif result >= 25 and result < 45:
    print("E")
elif result >= 45 and result < 50:
    print("D")
elif result >= 50 and result < 60:
    print("C")
elif result >= 60 and result < 80:
    print("B")
else:
    print("A")
# this code would be useful for students to check their grades per subject easily.
