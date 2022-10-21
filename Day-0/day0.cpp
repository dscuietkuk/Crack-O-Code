
#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble(int arr[],int n)

{
    int numswaps;

    do
    {
        // The number of swaps in this run through the loop starts at zero
        numswaps = 0; // if numswaps is 0 then list is sorted

        for (int i=1; i<n; i++)
        {
            if(arr[i] < arr[i-1])
            {
                swap(arr[i], arr[i-1]);
                // Increment the number of swaps we did
                numswaps++;
            }
        }
    } while (numswaps > 0); // exit if the number of swaps is zero
}


void minmax(int arr[],int n){

    double min_sum,max_sum;
    min_sum=0;
    max_sum=0;

  //min 
    for (int i = 0; i < n-1; i++)
    {
        min_sum=min_sum+arr[i];

    }
    //max 
    for ( int i=1 ; i<n;i++){
        max_sum=max_sum+arr[i];
    }
    cout<<min_sum<<" "<<max_sum;
    
}

int main(){

    int n,i;
    
   // int arr[5]={1,2,5,3,4};
    n=5;
   
   
    int arr[n];
    for(i=0;i<n;i++){
    cin>>arr[i];
    }

   bubble(arr,n);
   
    // printarr(arr,n);
    minmax(arr,n);
    return 0;
}
