import math
s=input()
s=s.replace(" ", '')
lengths=len(s)
lists=list(s.strip(" "))
rows=math.floor((lengths**.5))
columns=math.ceil(lengths**.5)
product=rows*columns
if product<lengths:
    rows=math.ceil(lengths**.5)
list2=[]
while len(lists) !=0:
    list3=lists[:columns]
    lol_string = ''.join(map(str, list3))
    list2.append(lol_string)
    lists=lists[columns:]
    #print(lists)
#print(list2)
list4=[]
for i in list2:
    lst=list(i.strip(" "))
    list4.append(lst)


def x(arr):
    for i in arr:
        if len(i)==0:
            print("",end="")
        else:   
            return False

    return True
while  list4 !=0: 
        
        for i in list4:
                s=x(list4)
                if s==False:
                    if len(i)!=0:
                        print(i[0],end="")
                        i.pop(0)
                else:
                    break
                
        if s==True:
                break
                    
                
                
        print("",end=" ")
