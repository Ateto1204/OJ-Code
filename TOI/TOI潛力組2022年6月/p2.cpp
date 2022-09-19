#include<bits/stdc++.h>
using namespace std;
int t, n, m, k, cnt, i;
signed main() {
    cin >> t;
    while(t--) {
        cin >> n >> m >> k;
        i=n-2, cnt=0;
        while(m > i) {
            ++cnt;
            m -= i;
            i -= 2;
        }
        cout << cnt << '\n';
    }
    return 0;
}
