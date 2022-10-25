n,d=map(int,input().split())
l=list(map(int,input().split()))
ans=0
for i in l:
    if( i+d in l and i+d+d in l):
        ans+=1
print(ans)
