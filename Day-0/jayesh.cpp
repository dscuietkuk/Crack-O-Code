#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,min,max=0,sum=0;
    for(int i=0;i<5;i++){
        cin>>n;
        sum+=n;
        if(n>max) max=n;
        if(i==0 or n<min) min=n;
    }
    cout<<sum-max<<" "<<sum-min;
    
    return 0;
}
