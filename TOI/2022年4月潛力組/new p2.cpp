#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define write freopen("output.txt", "w", stdout);
using namespace std;

int const N = 1e5+5;
int n, m, tmp, idx, seg, x, y, ans;
vector<int> a, b, v1, v2;

signed main() {
    AC
    while(cin >> n >> m) {
        a.clear(), b.clear();
        for(int i=0; i<n; ++i) {
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i=0; i<m; ++i) {
            cin >> tmp;
            b.push_back(tmp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        v1.clear(), v2.clear();
        x=0, y=0, seg=0;
        for(int i=0; i<n; ++i) {
            idx = seg;
            while(idx<m && a[i]>b[idx]) ++idx;
            x += idx;
            v1.push_back(idx);
            seg = idx;
            while(idx<m && a[i]==b[idx]) ++idx;
            y += m-idx;
            v2.push_back(m-idx);
        }
        ans = -1;
        for(int i=0; i<v1.size(); ++i) {
            if(x+v1[i]>y+v2[i] && v1[i]>0) {
                ans = a[i];
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
