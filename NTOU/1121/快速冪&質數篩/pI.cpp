#include <bits/stdc++.h>
#define int long long
#define N 305
using namespace std;

int arr[N], t, n, tmp, idx;
bool res;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> t;
    while( t-- ) {
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        tmp = arr[0] * arr[n-1], idx = 0, res = true;
        for(int i=2; i*i<=tmp; i++) {
            if( tmp % i == 0 ) {
                if( arr[idx] != i || arr[idx]*arr[n-idx-1] != tmp || idx >= n ) {
                    res = false;
                    break;
                }
                idx++;
            }
        }

        if( res ) cout << tmp << '\n';
        else cout << -1 << '\n';
    }
}
