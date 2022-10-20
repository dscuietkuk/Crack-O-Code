#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  long long int arr[5], sum = 0;
  
  for(int i = 0; i < 5; i++) {
    cin >> arr[i];
    sum += arr[i];
  }

  sort(arr, arr + 5);

  cout << sum - arr[4] << " " << sum - arr[0];

  return 0;
}
