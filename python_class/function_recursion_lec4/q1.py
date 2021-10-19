# Write a Python function to find the Max of three numbers. 

def max_three(a,b,c):
    if a>b and b>c:
        return a
    elif b>a and b>c:
        return b
    else:
        return c
    
x=int(input("Enter number 1: "))
y=int(input("Enter number 2: "))
z=int(input("Enter number 3: "))
print(max_three(x,y,z))