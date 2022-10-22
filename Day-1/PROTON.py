arr = [1, 0, 1, 3, 7, 1]
n = len(arr)
K = 5
freq = [0] * K
sum=0

for j in range(n):
    freq[arr[j] % K]+= 1
sum = freq[0] * (freq[0] - 1) / 2;

j = 1
while(j <= K//2 and j != (K - j) ):
    sum += freq[j] * freq[K-j]
    j+= 1

if( K % 2 == 0 ):
    sum += (freq[K//2] * (freq[K//2]-1)/2);
    
print(int(sum))
