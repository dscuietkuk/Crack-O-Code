arr = list(map(int, input().split())) #Taking input.
arr = list(map(int, input().split())) #Taking input.
arr.sort()
count = 1
temp = 0
MAX = 0
for x in arr:
    if (x==temp):
        count = count + 1
        if (count>=MAX):
            MAX = count
    else:
        temp = x
        count = 1
if MAX==0:
    MAX = 1
print(len(arr)-MAX)#By - Hiten Samalia
