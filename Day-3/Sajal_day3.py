a=int(input())
l=sorted(list(map(int,input().split())))
x=0
for i in range(a):
    y=0
    for j in range(i+1,a):
        if((l[j]-l[i])<2):
            y+=1
    if(x<y):
        x=y
print(x+1)
