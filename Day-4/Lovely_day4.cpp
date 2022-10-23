#include<iostream>
using namespace std;
int findDigits(int n){
int ans = 0,num = n;
while(n!=0){
    int a = n%10;
    if(a==0){
        n/=10;
        continue;
    }
    if(num%a==0){
        ans++;
    }
    n/=10;
}
return ans;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<findDigits(n)<<endl;
}
return 0;}
