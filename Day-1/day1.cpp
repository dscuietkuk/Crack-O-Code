#include<bits/stdc++.h>
using namespace std;
int divisibleSumPairs(int ar[], int n, int k){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((ar[i] + ar[j]) % k==0)
			count++;
		}
	}
	return count;
}
int main(){
	int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	cout<<divisibleSumPairs(ar,n,k);
	return 0;
}
