a,b=map(int,input().split())
s=list(map(int,input().split()))
c=0
for i in range(a-1):
    for j in range(i+1,a):
        if((s[i]+s[j])%b==0): c+=1
print(c)
