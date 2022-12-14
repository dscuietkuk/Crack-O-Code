import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
from collections import Counter
def sockMerchant(n, ar):
    sum = 0
    for val in Counter(ar).values():
        sum += val//2
    return sum
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
