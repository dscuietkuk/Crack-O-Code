n = int(input())
arr = sorted(list(map(int, input().split())))
ans = 0
for i in range(n - 1):
    temp = 1
    for j in range(i + 1, n):
        if ((arr[j] - arr[i]) < 2):
            temp += 1
    if (ans < temp):
        ans = temp
print(ans)
