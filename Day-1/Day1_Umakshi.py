n, k = map(int, input().split())
arr = sorted(list(map(int, input().split())))
c =0

def divisibleSumPass(k, arr):
    global i, j, c
    for i in range(len(arr)):
        for j in range(i + 1, n-1):
            s = arr[i] + arr[j]
            if s % k == 0:
                c = c + 1
    return c
print(divisibleSumPass(k,arr))
