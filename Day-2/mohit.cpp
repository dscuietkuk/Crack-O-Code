#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int>);

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

  cout << pickingNumbers(v);
  
  return 0;
}

int pickingNumbers(vector<int> a) {
  int ans = 2;

  map<int, int> m;
  for(auto it : a) m[it]++;

  if(m.size() == 1) ans = a.size();
  else {
    for(auto it = m.begin(); it != m.end(); ++it) {
      auto it_temp = next(it);
      if(it_temp->first - it->first == 1) {
	int temp = it_temp->second + it->second;
	if(temp > ans) ans = temp;
      }
      if(ans < it->second) ans = it->second;
    }
  }

  return ans;
}
