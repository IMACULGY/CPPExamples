#This piece of code is in Python!

def RightTriangleChecker(num1, num2, num3):
    if num1**2 == (num2**2 + num3**2):
        print("This is a right angled triangle")
    elif num2**2 == (num1**2 + num3**2):
        print("This is a right angled triangle")
    elif num3**2 == (num1**2 + num2**2):
        print("This is a right angled triangle")
    else:
        print("This is not a right angled triangle")
