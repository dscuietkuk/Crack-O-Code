tt= int(input())
for j in range(tt):
    n=int(input())
    x=[int(x) for a,x in enumerate(str(n))]
    count=0
    for i in x:
        if i !=0:
                if n%i==0 :
                    count=count+1
    print(count)
    
