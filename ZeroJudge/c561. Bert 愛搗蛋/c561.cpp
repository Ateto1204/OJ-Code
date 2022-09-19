#include<bits/stdc++.h>
using namespace std;
int parseInt(string s){
    int sum = 0;
    for(int i=s.length()-1; i>=0; i--){
        sum *= 10;
        sum += s[i]-'0';
    }
    return sum;
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    string n[t];
    int mx = 0;
    for(int i=0; i<t; i++)cin >> n[i];
    for(int i=0; i<t; i++){
        mx = max(mx, parseInt(n[i]));
    }
    cout << mx << '\n';
    return 0;
}
