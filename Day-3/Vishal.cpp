#include<bits/stdc++.h>
using namespace std;

int sockMerchant(int arr[], int n)
{
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int ans = 0;
    for(auto it: mp)
    {
        ans += it.second/2;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sockMerchant(arr,n);
    return 0;
}