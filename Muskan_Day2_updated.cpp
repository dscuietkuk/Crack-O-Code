#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int pickingNumbers(int n, int a[]){
	sort(a, a+n);
	int max_subarray=1;
	for(int i=0;i<n-1;i++){
        int m=1;
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j])<=1){
				m++;
			}
		}
		if(m>max_subarray){
			max_subarray=m;
		}
	}
	return(max_subarray);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<pickingNumbers(n,a);
	return 0;
}
