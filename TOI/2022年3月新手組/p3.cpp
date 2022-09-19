#include<bits/stdc++.h>
using namespace std;
signed main() {
    int x, r, v, t, n, m, le, ri;
    cin >> x >> r >> v >> t;
    while(t--) {
        le = x-r, ri = x+r;
        cin >> n >> m;
        if(n>=le && n<=ri) {
            if(m <= v) {
                x = n;
            }else if(n < x) {
                x += 15;
            }else {
                x -= 15;
            }
        }
    }
    cout << x << '\n';
    return 0;
}
