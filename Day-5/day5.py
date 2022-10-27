arr = list(map(int, input().split())) #Taking input.
d = arr[1]
temp = 0
arr = list(map(int, input().split())) #Taking input.
for x in range(0,len(arr)):
    for y in range (x+1, len(arr)):
        for z in range(y+1, len(arr)):
            try:
                if arr[y] - arr[x] == d and arr[z] - arr[y]==d and x<y<z:
                    # print(f'arr[y] : {arr[y]}, arr[z] : {arr[z]}, arr[x] : {arr[x]}, x : {x}, y : {y}, z : {z}')
                    temp = temp + 1;
                else:
                    continue
            except:
                break
        
print(temp)