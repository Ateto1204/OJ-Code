#include <bits/stdc++.h>
using namespace std;

int t, n, m, ans, k;
string a, b;
bool flag;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while( t-- ) {
        cin >> n >> m;
        cin >> a >> b;
        ans = 0, k = 0, flag = false;
        if( a.size() >= b.size() ) {
            for(int i=0; i<=a.size()-b.size(); i++) {
                if( a[i] == b[0] ) {
                    flag = true;
                    for(int j=1; j<b.size(); j++) {
                        if( a[i+j] != b[j] ) {
                            flag = false;
                            break;
                        }
                    }
                    if( flag ) break;
                }
            }
            if( flag ) {
                cout << 0 << '\n';
                continue;
            }
        }
        while( k < 15 ) {
            a += a;
            ans++;
            if( a.size() < b.size() ) continue;
            k++, flag = false;
            for(int i=0; i<=a.size()-b.size(); i++) {
                if( a[i] == b[0] ) {
                    flag = true;
                    for(int j=1; j<b.size(); j++) {
                        if( a[i+j] != b[j] ) {
                            flag = false;
                            break;
                        }
                    }
                    if( flag ) break;
                }
            }
            if( flag ) break;
        }
        if( flag ) cout << ans << '\n';
        else cout << -1 << '\n';
    }
}
