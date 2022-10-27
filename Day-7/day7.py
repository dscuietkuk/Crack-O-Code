from collections import Counter
n=int(input());arr=arr = list(map(int, input().split()));c = Counter(arr)
lst=list(c);sumx=0;xmax=c.get(lst[0]);lst1=[];lst1.append(lst[0])
for i in c:
    x=c.get(i)
    if x>xmax:
        xmax=x;lst1.append(i)  
y=lst1.pop();sumx=n-xmax
def g(arr):
    if len(set(arr)) == 1:
        return True
    return False
while y in arr:
        arr.remove(y)
check=g(arr)
if sumx>xmax and check==True:
    print(xmax)
else:
    print(sumx)
