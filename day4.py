for i in range(int(input())):
    s=input()
    n=int(s)
    count=0
    for j in s:
        if(int(j)!=0and n%int(j)==0):
            count+=1
    print(count)
