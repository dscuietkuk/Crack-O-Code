a = int(input())
b = int(input())
sum =0
arr = list(map(int,input().split()))
for i in range(a):
    for j in range(i+1,a):
        if((arr[i]+arr[j])%b==0):
            sum+=1
print(sum
