import sys


n,k = input().strip().split(' ')
n,k = [int(n),int(k)]
a = [int(a_temp) for a_temp in input().strip().split(' ')]

result = 0
for i in range(n-1):
    for j in range(i+1, n):
        if not ((a[i] + a[j]) % k):
            result += 1
print(result)
