#include<bits/stdc++.h>
using namespace std;
int flag;
int recursive(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(!a)a = recursive();
    if(!c)c = recursive();
    if(a*b != c*d)flag = 0;
    return a + c;
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        flag = 1;
        recursive();
        if(flag)cout << "YES\n";
        else cout << "NO\n";
        if(t)cout << '\n';
    }
    return 0;
}
