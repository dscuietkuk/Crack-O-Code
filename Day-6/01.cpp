#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j;
    string s;
    cin>>s;
    int c=(int(sqrt(s.length())))+1;
    for(i=0;i<c;i++){
        for(j=i;j<s.length();j+=c){
            cout<<s[j];
        }
        cout<<" ";
    }
    return 0;
}
