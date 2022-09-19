#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int const INF = 1e9;
int const N = 105;

int arr[N], n, avg, mx, mn, mx_idx, mn_idx;

signed main() {
    mn = INF;
    cin >> n;
    for(int i=0; i<n; ++i) cin >> arr[i];
    for(int i=0; i<n; ++i) avg += arr[i];
    avg /= n;
    for(int i=0; i<n; ++i) {
        if(arr[i] > mx) {
            mx = arr[i];
            mx_idx = i;
        }
    }
    if(mx-avg > 0) {
        for(int i=0; i<n; ++i) {
            if(arr[i] < mn) {
                mn = arr[i];
                mn_idx = i;
            }
        }
    }
    arr[mx_idx] -= mx-avg;
    arr[mn_idx] += mx-avg;
    cout << arr[0];
    for(int i=1; i<n; ++i) cout << ' ' << arr[i];
    cout << '\n';
    return 0;
}
