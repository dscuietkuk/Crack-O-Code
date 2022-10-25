n,d=map(int,input().split())
l=list(map(int,input().split()))
c=0
for i in l:
    if i+d in l and i+d+d in l:
        c+=1
print(c)
