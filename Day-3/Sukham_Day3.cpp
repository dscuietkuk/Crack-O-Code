#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	
	unordered_map<int, int> m;
	for(int i = 0;i<n;i++)
	{
		int x;
		cin>>x;
		m[x]+=1;
	}
	
	int ans = 0;
	for(auto x: m)
	{
		ans += x.second/2;
	}
	cout<<ans<<endl;

	return 0;
}
