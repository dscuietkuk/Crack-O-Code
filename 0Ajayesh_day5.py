a,b=map(int,input().split())
s=list(map(int,input().split()))
c=0
for i in s:
    if((i+b in s)and(i+b+b in s)): c+=1
print(c)
