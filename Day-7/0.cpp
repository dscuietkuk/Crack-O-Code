#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0,m;
    vector<char> a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        a.push_back(m);
    }
    for(int i=0;i<n;i++){
        int c=count(a.begin(), a.end(), a[i]);
        if(c==1) sum+=1;
    }
    cout<<sum;
    return 0;
}
