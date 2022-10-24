#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string a;
    cin>>n;
    while(n--){
        cin>>a;
        int c=0;
        for(int i=0;i<a.length();i++){
           if((int(a[i])-48!=0) && (stoi(a)%(int(a[i])-48)==0)) c+=1;
        }
        cout<<c<<endl;
    }
    return 0;
}
