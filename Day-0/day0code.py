line=input()
num=line.split()
max=[0]
min=[0]
num.sort()
if (len(num)==5):
    i=0
    while (i <(len(num)-1)):
        if(int(num[i])<int(num[i+1])):
            min.append(int(num[i]))
            max.append(int(num[i+1]))
            i+=1
        elif(int(num[i])==int(num[i+1])):
            min.append(int(num[i]))
            max.append(int(num[i]))
            i+=1
x=0
for k in range(len(max)):
    x+=max[k]
n=0
for h in range(len(min)):
    n+=min[h]
print(n, x)
