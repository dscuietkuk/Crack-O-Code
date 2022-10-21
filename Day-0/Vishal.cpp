#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {0};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    int maxi = -9999 , mini = 9999;
    for (int i = 0; i < 5; i++)
    {
        maxi = max(maxi,sum-arr[i]);
        mini = min(mini,sum-arr[i]);
    }

    cout<<mini<<" "<<maxi;
    
    return 0;
}