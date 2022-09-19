#include<bits/stdc++.h>
using namespace std;
string s;
int le, ri;
void dfs(int n){
    if(le < ri)return ;
    if(s.length() == n*2){
        if(le == ri)cout << s << '\n';
    }else{
        s.push_back('(');
        le += 1;
        dfs(n);
        s.pop_back();
        le -= 1;

        s.push_back(')');
        ri += 1;
        dfs(n);
        s.pop_back();
        ri -= 1;
    }
}
signed main(){
    int n;
    while(cin >> n){
        dfs(n);
    }
    return 0;
}
