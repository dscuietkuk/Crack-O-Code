#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e3 + 10;

int n, a[MAXN];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;   cin >> temp;
        a[temp]++;
    }
    int ans = 1e9;
    for (int i = 0; i < MAXN; i++)
        ans = min(ans, n - a[i]);
    cout << ans << endl;
    return 0;
}
