x = 84

if x == 15:
    print("x is equal to 15")

elif x != 15:
    print(f"x does not equal 15, it equals {x}")
    if x < 15:
        print(f"In order for x to equal 15, you must add {15-x}")
    elif x > 15:
        print(f"In order for x to equal 15, you must subtract {x-15}")

# Fun math shit

a = 8

b = 9

type = "S" # Options: Add (A), Subtract (S), Multiply (M), Divide (M)

def math(num1,num2,type):

    if type == "M":
        print(f"{num1} multiplied by {num2} is: {num1*num2}")
        
    elif type == "S":
        print(f"{num1} minus {num2} is: {num1-num2}")

    elif type == "A":
        print(f"{num1} plus {num2} is: {num1+num2}")

    if type == "D":
        print(f"{num1} divided by {num2} is: {num1/num2}")
    
math(a, b, type)