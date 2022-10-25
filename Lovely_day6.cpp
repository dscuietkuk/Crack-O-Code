#include<iostream>
#include<vector>
#include<string.h>
#include<math.h>
using namespace std;

string encryption(string s){
    vector<char> res;
    int len = s.size();
    int n = ceil(sqrt(len));
    vector<bool> visited(len,false);
    for(int i = 0;i<len;i++){
        if(visited[i]==true){
            continue;
        }
        res.push_back(s[i]);
        for(int j = i+n;j<len;j+=n){
            res.push_back(s[j]);
            visited[j] = true;
        }
        res.push_back(' ');
    }
    string answer = "";
     for(int i = 0;i<res.size();i++){
        answer = answer + res[i];
    }
    return answer;
}

int main(){

string s;
getline(cin,s);
vector<char> v;
for(int i = 0;i<s.size();i++){
    if(s[i]==' '){
        continue;
    }
    else{
        v.push_back(s[i]);
    }
}
string final = "";
 for(int i = 0;i<v.size();i++){
        final = final + v[i];
    }
    cout<<encryption(final);
return 0;}
