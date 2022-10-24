testcases = int(input())
def findDigits():
        value = input()
        temp = 0
        for x in value:
            try:
                val = int(value)%int(x)==0
            except:
                continue;
            if(int(value)%int(x)==0):
                temp = temp + 1
            else:
                continue;    
        print(temp)
while testcases:
    testcases = testcases - 1
    findDigits() #By - Hiten Samalia
    