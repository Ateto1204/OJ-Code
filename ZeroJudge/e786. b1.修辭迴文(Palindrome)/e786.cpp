#include<bits/stdc++.h>
using namespace std;
string s;
bool f(int le, int ri){
    if(le >= ri)return true;
    if(s[le] == s[ri])return f(le+1, ri-1);
    return false;
}
signed main(){
    cin >> s;
    if(s.length()%2==1)cout << "NO\n";
    else if(f(0, s.length()-1)){
        cout << "YES\n";
        for(int i=0; i<s.length()/2; i++)cout << s[i];
        cout << '\n';
    }else cout << "NO\n";
    return 0;
}
