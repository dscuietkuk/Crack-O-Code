#include <bits/stdc++.h>
using namespace std;

int longestSubArray(int arr[], int n, int limit)
{
    sort(arr, arr + n);
    int maxLength = 1;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] <= 1)
            {
                count = j - i + 1;
                if (count > maxLength)
                {
                    maxLength = count;
                }
            }
        }
    }

    return maxLength;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longestSubArray(arr, n, 1);
    return 0;
}