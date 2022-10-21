
#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int, int, vector<int>);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  vector<int> v;
  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  cout << divisibleSumPairs(n, k, v);

  return 0;
}

int divisibleSumPairs(int n, int k, vector<int> v) {
  int ans = 0;
  for(int i = 0; i < n-1; i++) {
    for(int j = i+1; j < n; j++) {
      if((v.at(i) + v.at(j)) % k == 0) ans++;
    }
  }
    
  return ans;
}
