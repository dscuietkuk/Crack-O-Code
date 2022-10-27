import math
s=input()
s=s.replace(" ","")
r=int(math.sqrt(len(s)))
c=r+1
for i in range(0,c):
    for j in range(i,len(s),c):
        print(s[j],end='')
    print(" ",end='')
