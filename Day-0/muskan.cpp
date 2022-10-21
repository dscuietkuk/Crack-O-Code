#include<bits/stdc++.h>
#define long long
using namespace std;
int main(){
	long long arr[5];
	for(int i=0;i<5;i++)
	cin>>arr[i];
	sort(arr,arr+5);
	int max=0,min=0;
	for(int i=0;i<4;i++)
	min=min+arr[i];
	for(int i=4;i>0;i--)
	max=max+arr[i];
	cout<<min<<" "<<max<<endl;
	return 0;
}
