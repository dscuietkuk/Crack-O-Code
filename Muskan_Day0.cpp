#include<iostream>
using namespace std;
void miniMaxSum(int arr[]){
	int sum = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	int min = (sum-arr[0]);
	int max = (sum-arr[0]);
	for(int j=1; j<5;j++){
	    if(min>(sum-arr[j])){
	    	min = sum-arr[j];
		}
		if(max<(sum-arr[j])){
	    	max = sum-arr[j];
		}
	}
	cout<<min<<" "<<max;
}

int main(){
	int arr[5];
	cout<<"Enter five positive integers: ";
	for(int i=0;i<5;i++){
     	cin>>arr[i];		
	}
    miniMaxSum(arr);
	return 0;
}
