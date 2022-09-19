#include<bits/stdc++.h>
using namespace std;
string s;
int f(int le, int ri, int k){
    if(ri-le < 1)return true;
    if(s[le] == s[ri]){
        return f(le+1, ri-1, k);
    }
    if(k){
        return f(le+1, ri, k-1) || f(le, ri-1, k-1);
    }
    return false;
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        cout << (f(0, s.length()-1, 1)?"YES":"NO") << '\n';
    }
    return 0;
}
