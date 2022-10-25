n, d = map(int, input().split(' '))
arr = list(map(int, input().split()))
count = 0


def beautifulTriplets(d, arr):
    global count
    for i in range(n):
        for j in range(i+1,n):
            for k in range(j+1,n):
                if arr[j] - arr[i] == arr[k] - arr[j] == d:
                    count = count + 1

    return count


print(beautifulTriplets(d, arr))
