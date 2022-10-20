arr = sorted(list(map(int,input("").split(" ")))[:5])
print("{} {}".format(sum(arr[:4]),sum(arr[1:])))
