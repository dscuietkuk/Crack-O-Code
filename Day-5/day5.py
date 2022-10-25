n,d=list(map(int, input().split()))
arr = list(map(int, input().split()))
arr2=arr[1:]
count=0
for i in arr:
    for j in arr2:
        for k in range(2,n):
            x=j-i
            y=arr[k]-j
            if x==d and y==d:
                count=count+1
print(count)
