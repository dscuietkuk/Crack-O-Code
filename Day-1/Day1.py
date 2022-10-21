
n,k = map(int,input().split())
ans =0
l = list(map(int,input().split()))
for i in range(n):
    for j in range(i+1,n):
        if((l[i]+l[j])%k==0):
            ans+=1
print(ans)
