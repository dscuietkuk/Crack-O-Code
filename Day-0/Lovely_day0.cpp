#include<iostream>
#include<vector>
using namespace std;

void miniMaxSum( int arr[]) {
    int min = INT16_MAX;
    int max = INT32_MIN;
    for(int i = 0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    int sum = 0;
   for(int i = 0;i<5;i++){
       sum+=arr[i];
   }
   cout<<sum-max<<" "<<sum-min;
}


int main(){
int arr[5];
for(int i = 0;i<5;i++){
    cin>>arr[i];
}
miniMaxSum(arr);
return 0;}
