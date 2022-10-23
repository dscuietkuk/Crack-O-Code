#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sockMerchant(int n,int a[]){
	sort(a, a+n);
	int num=1;
	int pairs=0;
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			num++;
		}
		else{
			if(num%2==0){
				pairs += num/2;
			}
			else{
				pairs += (num-1)/2;
			}
			num=1;
		}
	}
	return(pairs);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];	
	}
	cout<<sockMerchant(n,a);
	return 0;
}
