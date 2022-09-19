#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
signed main() {
//    AC
    int a, b, ans, i;
    cin >> a >> b;
    for(i=2, ans=-1; i<max(a, b); ++i) {
        if(a%i == b%i) {
            ans = i;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}

