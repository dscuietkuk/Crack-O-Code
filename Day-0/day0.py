arr = list(map(int, input().split())) #Taking input.

arr.sort() #Sorting the array.

def miniMaxSum(arr):
    minSum = 0; #Initialising minSum.
    maxSum = 0; #Initialising maxSum.
    
    for x in range(0, len(arr)-1): #adding values for minSum.
        minSum = minSum + arr[x];

    for y in range(1, len(arr)): #adding values for maxSum.
        maxSum = maxSum + arr[y];

    return [minSum, maxSum] #returning the values.


print(f'{miniMaxSum(arr)[0]} {miniMaxSum(arr)[1]}') #printing the result.