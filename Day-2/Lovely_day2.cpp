#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;     //size of the array
    cin >> n;

    int arr[n];     
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 1;    // would store the max subarray length
    int len;        // would store the current subarray length
    
    for (int i = 0; i < n; i++)
    {
        int end = i + 1;
        
        while (abs(arr[i] - arr[end]) <= 1)
        {
            end++;
        }
        
        len = end - i;
        ans = max(len, ans);
    }
    
    cout << ans;
    return 0;
}

// TIME COMPLEXITY : O(n*n)
