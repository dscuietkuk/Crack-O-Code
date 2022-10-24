for i in range(int(input())):
    s=input()
    a=int(s)
    c=0
    for j in s:
        if((int(j)!=0)and(a%(int(j))==0)): c+=1
    print(c)
