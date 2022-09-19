#include<bits/stdc++.h>
using namespace std;

int const N = 1005;
int arr[N], n, m, mx, cnt;

signed main() {
    cin >> n >> m;
    --m;
    for(int i=0; i<n; ++i) cin >> arr[i];
    mx = arr[m];
    for(int i=m+1; i<n; ++i) {
        if(arr[i]>mx) {
            ++cnt;
            mx = arr[i];
        }
    }
    mx = arr[m];
    for(int i=m-1; i>=0; --i) {
        if(arr[i]>mx) {
            ++cnt;
            mx = arr[i];
        }
    }
    cout << cnt << '\n';
    return 0;
}
