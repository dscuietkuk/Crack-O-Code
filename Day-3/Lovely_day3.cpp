#include <iostream>
#include <vector>
using namespace std;

int sockMerchant(int arr[], int n)
{
    vector<bool> visited(n, false);
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }
        v.push_back(count);
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 1)
        {
            ans += v[i] / 2;
        }
    }
    return ans;
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
    cout << sockMerchant(arr, n);
    return 0;
}
