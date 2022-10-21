nk= list(map(int, input().split()))
arr = list(map(int, input().split()))
n=nk[0]
k=nk[1]
count=0
for i in range(n):
    for j in range(i+1,n):
        sum=arr[i]+arr[j]
        if  sum%k==0:
            count=count+1
print(count)
  
