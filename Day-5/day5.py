n,d=map(int,input().split())
a=list(map(int,input().split()))
x=0
for i in a:
    if i+d in a and i+d+d in a:
        x+=1
print(x)
