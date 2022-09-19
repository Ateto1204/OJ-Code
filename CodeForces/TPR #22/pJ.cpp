#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define f first
#define s second
using namespace std;

int const N = 1e6;
int const INF = -1e10;
int arr[N], prefix[N];

signed main() {
    AC
    int n, mx;
    cin >> n;
    for(int i=1; i<=n; ++i) {
        cin >> arr[i];
    }
    prefix[1]=arr[1];
    for(int i=2; i<=n; ++i) {
        prefix[i] = prefix[i-1] + arr[i];
    }
    mx = INF;
    for(int i=4; i<=n; ++i) {
        mx = max(mx, prefix[i]-prefix[i-4]);
    }
    cout << mx << '\n';
    return 0;
}

