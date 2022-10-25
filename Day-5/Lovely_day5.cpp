#include<iostream>
using namespace std;

int beautifulTriplets(int arr[],int n,int d){
    int ans = 0;
  for(int i = 0;i<n-2;i++){
    for(int j = i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++ ){
            if((arr[k]-arr[j] == d ) && (arr[j]-arr[i]==d)){
                ans++;
            }
        }
    }
  }
    return ans;
}

int main(){
int n,d;
cin>>n>>d;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
cout<<beautifulTriplets(arr,n,d);
return 0;}
