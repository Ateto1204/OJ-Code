#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,cnt=0;
        cin >> a >> b >> c;
        while(a<=c){
            a *= b;
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
