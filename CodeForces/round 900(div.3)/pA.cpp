#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define int long long
#define N 105
using namespace std;

int arr[N], t, n, k, res;

signed main() {
    cin >> t;
    while(t--) {
        cin >> n >> k;
        res = false;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++) {
            if(arr[i] == k) res = true;
        }
        if(res) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
