n= int(input())
ar = list(map(int,input().split()))
b=[*set(ar)]
def sockMerchant(n,ar):
    output = 0
    for i in b:
        output+=int((ar.count(i))/2)
    return output
print(sockMerchant(n,ar))
