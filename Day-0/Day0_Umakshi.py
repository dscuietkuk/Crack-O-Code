# creating an array using map function

arr = list(map(int, input().split(' ')))

# creating a function miniMaxSum
def miniMaxSum(arr):
    global max
    s = sum(arr)
    mini = s - max(arr)
    maxi = s- min(arr)
    print(mini,maxi)
    return mini,maxi
miniMaxSum(arr)
