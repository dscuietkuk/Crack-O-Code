#include<iostream>
using namespace std;

int divisibleSumPairs(int arr[],int n,int k){

int ans=0;
for(int i = 0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if((arr[i]+arr[j])%k==0){
            ans++;
        }
    }
}
return ans;
}
int main(){
int n,k;cin>>n>>k;
int arr[n];
for(int i= 0;i<n;i++){
    cin>>arr[i];
}
cout<<divisibleSumPairs(arr,n,k);
return 0;}
