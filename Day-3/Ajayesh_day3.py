s=int(input())
a=list(map(int,input().split()))
b=[*set(a)]
result=0
for i in b:
    result+=int((a.count(i))/2)
print(result)
