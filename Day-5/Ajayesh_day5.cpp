#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,c,d=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int x=m+i;
        int y=x+i;
        c=0;
        for(int j=i;j<n;j++){
            if(a[j]==x || a[j]==y) c+=1;
        }
        if(c>=2){
            d+=1;
        }
        
    }
    cout<<d+1;
    return 0;
}
