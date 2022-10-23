arr = list(map(int, input().split())) #Taking input.
count = arr[0]
arr = list(map(int, input().split())) #Taking input.

arr.sort() #Sorting the array.
x = 0
y = 1
L=[]; L.append(arr[x]);
temp=0
while(x<len(arr) ): 
    while (abs(arr[y] - arr[x])<=1):
        L.append(arr[y]);
        y=y+1;
        try:
            arr[y]
        except:
            if temp<len(L):
                temp = len(L)
            break;
        if temp<len(L):
            temp = len(L)   
    x = x+1
    y = x+1
    try:
        arr[y]
    except:
        break;
    L=[]
    L.append(arr[x]);
print(temp)#by - Hiten Samalia