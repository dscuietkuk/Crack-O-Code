t = int(input())


def findDigits(x):
    global output
    for j in x:
        if j!=0:
            if n%j==0:
                output = output +1
    return output


for i in range(t):
    n = int(input())
    x = [int(x) for a,x in enumerate(str(n))]
    output = 0
    print(findDigits(x))
