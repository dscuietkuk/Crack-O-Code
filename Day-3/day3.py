from collections import Counter
n=int(input())
arr = list(map(int, input().split()))
c = Counter(arr)
lst=[]
for i in c:
    x=c.get(i)
    if x==1:
        lst.append(0)
    elif x%2==0:
        lst.append(x/2)
    else:
        lst.append((x-1)/2)
print(int(sum(lst)))
    
