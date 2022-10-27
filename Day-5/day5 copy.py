arr = list(map(int, input().split())) #Taking input.
d = arr[1]
temp = 0
arr = list(map(int, input().split())) #Taking input.
x = 0;y=1;z=2
while (True):
    try:
        # print("\nY : ", y,"\n")
        if (y>=len(arr)):
            x = x + 1
            y = x+1;
            z=y+1;
        if arr[y] - arr[x] == d and x<y:
            # print([arr[y]])
            if (z>=len(arr)):
                x = x + 1
                y = x+1;
                z=y+1;
            if arr[z] - arr[y] == d and x<y<z:
                # print(f'arr[x] : {arr[x]}, arr[y] : {arr[y]}, arr[z] : {arr[z]}, x : {x}, y : {y}, z : {z}')
                temp = temp + 1;
                x = x +1;
                y = x+1;
                z=y+1;
            else:
                z = z+1    
        else:
            y = y+1;
    except:
        break
        
print(temp)