a=int(input())
s=list(map(int,input().split()))
s.sort()
v=[]
for i in range(a-1):
    l=[]
    for j in range(i+1,a):
        if((s[j]-s[i])<2):
            l.append((s[j]))
    l.append((s[i]))
    if(len(v)<len(l)):
        v=l
print(len(v))
