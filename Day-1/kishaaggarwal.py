arr = [2, 0, 1, 3, 7, 5]
n = len(arr)
K = 3
freq = [0] * K
sum=0

for i in range(n):
    freq[arr[i] % K]+= 1
sum = freq[0] * (freq[0] - 1) / 2;

i = 1
while(i <= K//2 and i != (K - i) ):
    sum += freq[i] * freq[K-i]
    i+= 1

if( K % 2 == 0 ):
    sum += (freq[K//2] * (freq[K//2]-1)/2);
    
print(int(sum))
