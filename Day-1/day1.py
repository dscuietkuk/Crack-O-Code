arr = list(map(int, input().split())) #Taking input.

num = arr[1] #Taking the number.
arr = list(map(int, input().split())) 

count = 0

for x in range(0, len(arr)):
    for y in range(x+1, len(arr)):
        if ((arr[x]+arr[y])%num==0):
            count=count+1

        else:
            continue;



print(count) #By - Hiten Samalia