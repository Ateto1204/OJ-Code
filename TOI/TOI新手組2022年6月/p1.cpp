#include<bits/stdc++.h>
#define int long long
using namespace std;
int const N = 101;
int arr[N][N], n, flag, x, y;
signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    flag = false;
    cin >> n;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; ++i) {
        int mx, idx;
        mx = 0;
        for(int j=0; j<n; ++j) {
            mx = max(mx, arr[i][j]);
        }
        for(int j=0; j<n; ++j) {
            if(arr[i][j] == mx) {
                flag = true;
                for(int k=0; k<n; ++k) {
                    if(arr[k][j] < mx) {
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    x=i, y=j;
                    break;
                }
            }
        }
        if(flag) break;
    }
    if(!flag) cout << "NO\n";
    else cout << x << ' ' << y << '\n';
    return 0;
}
