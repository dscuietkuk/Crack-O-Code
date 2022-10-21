#include<iostream>
using namespace std;
int divisibleSumPairs(int n, int k, int a[]){
    int i,j,pairs=0;
    for(i=0;i<(n-1);i++){
		for(j=(i+1);j<n;j++){
			int sum = a[i]+a[j];
    		if(sum%k==0){
    			pairs++;
			}
		}
	}
	return(pairs);
}

int main(){	

	int n,k;
    cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];	
	}

	int x = divisibleSumPairs(n,k,a);
	cout<<x;
	return 0;
}
