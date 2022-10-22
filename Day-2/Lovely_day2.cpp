#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 1;
    int len;
    for (int i = 0; i < n; i++)
    {
        int end = n - 1;
        while (abs(arr[i] - arr[end]) > 1)
        {
            end--;
        }
        len = end + 1 - i;
        ans = max(len, ans);
    }
    cout << ans;
    return 0;
}
