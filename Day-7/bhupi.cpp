#include <bits/stdc++.h>
using namespace std;

int equalizeArray(vector<int>);

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

  cout << equalizeArray(v);
  
  return 0;
}

int equalizeArray(vector<int> arr) {
  unordered_map<int, int> um;
  for(auto it : arr) um[it]++;

  int max = 0;
  for(auto pr : um) if(max < pr.second) max = pr.second;

  if(max != 1) return (arr.size() - max);
  else return (arr.size() - 1);
}
