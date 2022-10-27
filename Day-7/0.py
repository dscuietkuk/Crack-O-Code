a=int(input())
s=list(map(int,input().split()))
c=set(s)
d=0
for i in c:
    if(s.count(i)==1):d+=1
print(d)
