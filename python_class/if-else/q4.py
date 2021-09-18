# Write a python program to find those numbers which are divisible by 7 and multiples of 5, between 1500 and 2700.

start=1500
end=2700+1

for i in range(start,end):
    if i%7==0 and i%5==0:
        print(i,end=",")