#include<bits/stdc++.h>
using namespace std;
int sockMerchant(int n,int ar[]){
	int count=0;
	sort(ar,ar+n);
	for(int i=0;i<n;i++){
		if(ar[i]==ar[i+1]){
			count++;
			i+=1;
		}
	}
	cout<<count<<endl;
}
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	sockMerchant(n,ar);
	return 0;
}
