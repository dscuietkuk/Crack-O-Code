#include<iostream>
#include<math.h>
using namespace std;

int equalizeArray(int arr[],int n){
   int res = 1;
   for(int i =0;i<n;i++){
    int freq = 0;
    for(int j = 0;j<n;j++){
        if(arr[i]==arr[j]){
            freq++;
        }
    }
    res = max(freq,res);
   }
    return n-res;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
cout<<equalizeArray(arr,n);
return 0;}
