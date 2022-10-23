n= int(input())
arr = list(map(int, input().split()))
def pair(arr,n):
    count=0
    for i in arr:
        if len(arr)==1:
            arr.remove(i)
        else:
            x=False
            for j in range(1,len(arr)):
                if i==arr[j]:
                    arr.pop(j)
                    arr.remove(i)
                    count=count+1
                    x=True
                    break 
            if x==False:
                arr.remove(i)
        break 
    return count
lst=[]
while(len(arr) != 0):
    sum=pair(arr,len(arr))
    lst.append(sum)
sum=0
for i in lst:
    sum=sum+i
print(sum)
