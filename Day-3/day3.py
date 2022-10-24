arr = list(map(int, input().split())) #Taking input.
count = arr[0]
arr = list(map(int, input().split())) #Taking input.

def sockMerchant(count, arr):
    arr.sort() #Sorting the array.
    unq = set(arr);
    temp = 0;pair = 0;L=[]
    for x in unq:
        for y in range(0,len(arr)):
            if x == arr[y]:
                temp=temp+1
            else:
                continue;
        temp=temp//2;
        pair = pair+temp
        temp=0
    return pair
    
print(sockMerchant(count,arr))#by - Hiten Samalia