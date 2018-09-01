# Function Returning More than 1 values in Python

def Calculate(a,b):
    add = a+b
    mul = a*b
    sub = a-b
    div = a/b
    return add,mul,sub,div
    #Return As a Tuple in Python

a = 10
b = 2
tuple1 = Calculate(a,b)
print("Num1: " + str(a) + " Num2: "+ str(b))
print("Addition: " + str(tuple1[0]))
print("Multiply: " + str(tuple1[1]))
print("Subtract: " + str(tuple1[2]))
print("Devide: " + str(tuple1[3]))

    
