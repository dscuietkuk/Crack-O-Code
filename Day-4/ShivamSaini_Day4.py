t = int(input())
for i in range(t):
    n = input()
    ans = 0
    for j in n:
        if (int(j) != 0 and int(n) % int(j) == 0):
            ans += 1
    print(ans)
