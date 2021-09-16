lst=[3,5,2,7,8,9]
steps=4

n=len(lst)

for st in range(steps):
    key=lst[-1]
    
    for i in range(n-1,0,-1):
        lst[i]=lst[i-1]
    
    lst[0]=key
    
print(lst)