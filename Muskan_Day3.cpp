#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sockMerchant(int n,int a[]){
	sort(a, a+n);
	int count=1;
	int pairs=0;
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			count++;
		}
		else{
			if(count%2==0){
				pairs += count/2;
			}
			else{
				pairs += (count-1)/2;
			}
			count=1;
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
