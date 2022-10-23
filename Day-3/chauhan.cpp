#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int, vector<int>);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  vector<int> v;
  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  cout << sockMerchant(n, v);
  
  return 0;
}

int sockMerchant(int n, vector<int> ar) {
  int ans = 0;

  unordered_map<int, int> m;

  for(auto it : ar) m[it]++;
  for(auto pr : m) ans += pr.second / 2;

  return ans;
}
