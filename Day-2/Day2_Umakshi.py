n = int(input())
a = sorted(list(map(int, input().split())))
b =[*set(a)]
ans = 0


def pickingNumbers(n, a):
    global ans
    for i in range(len(a)):
        temp = 1
        for j in range(i + 1, n):
            if ((a[j] - a[i]) < 2):
                temp += 1
            if (ans < temp):
                ans = temp
    return ans


print(pickingNumbers(n, a))
