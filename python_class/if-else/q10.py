# Write a Python program to check a triangle is equilateral, isosceles or scalene. 
# Note :An equilateral triangle is a triangle in which all three sides are equal.
# A scalene triangle is a triangle that has three unequal sides.
# An isosceles triangle is a triangle with (at least) two equal sides.

s1 = int(input())
s2 = int(input())
s3 = int(input())
if(s1==s2==s3):
    print("Equilateral")
elif(s1==s2 or s2==s3 or s1==s3):
    print("isosceles")
else:
    print("scalene")