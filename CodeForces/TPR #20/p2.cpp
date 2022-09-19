#include<bits/stdc++.h>
#define int long long
using namespace std;

int const N = 25;
int arr[N][N], dp[N][N], n, m;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=m; ++j) {
            cin >> arr[i][j];
        }
    }
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=m; ++j) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])+arr[i][j];
        }
    }

    cout << dp[n][m] << '\n';
    return 0;
}
