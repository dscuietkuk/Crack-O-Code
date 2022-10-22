#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int pickingNumbers(int n, int a[]){
	int max_subarray=0;
	int x,min,max,y;
	for(int i=0;i<n;i++){
		int* b = new int[n];
    	int m=0;
		for(int j=0;j<n;j++){
			x = a[i]-a[j];
			if(x==0 || x==1 || x==(-1)){
				b[m]=a[j];
				m++;
			}
		}
		min = *min_element(b, b + m);
		max = *max_element(b, b + m); 
		y = max-min; 
		if(y==0 || y==1){
			if(m>max_subarray){
				max_subarray=m;
			}
		}
		delete[] b;
	}
	if(max_subarray<2){
		max_subarray=2;
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
