#include <bits/stdc++.h>
using namespace std;

int findDigits(int);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    cout << findDigits(n) << "\n";;
  }
  
  return 0;
}

int findDigits(int n) {
  int ans = 0;

  int temp = n;
  
  while(temp != 0) {
    int a = temp % 10;

    if(a != 0 && n%a == 0) ans ++;

    temp /= 10;
  }

  return ans;
}
