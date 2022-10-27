
import math
string = input()

temp = 0
string1 = ""
for x in string.split():
    temp = temp + len(x)
    string1 = string1 + x

length = temp
temp = math.sqrt(temp)
floor = math.floor(temp)
ceil = math.ceil(temp)

row = floor #no. of char in the line
col = ceil #next line

if (floor<=row<=col<=ceil and row*col>=temp):
    start = 0; end = col; string2=""; final = ""
    for x in range(0, col):
        string2 = string2 + string1[start:end] + "\n"
        start = start + col;
        end = end + col;
    L = string2.split("\n")
    check1 = L.pop()
    count = 0;
    val = 0
    while(count<length):
        for x in L:
            try:
                final = final + x[val]
                count = count + 1
            except:
                continue;
        val = val + 1
        if (val%len(L[0]) == 0):
            val=0
        final = final + " "

    print(final.rstrip())# By - Hiten Samalia
else:
    print(False)

