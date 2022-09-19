#include<bits/stdc++.h>
#define int long long
using namespace std;

int const N = 1e4;
int arr[N], dp[N], n, k, cnt;

signed main() {
    cin >> n >> k;
    for(int i=1; i<=n; ++i) cin >> arr[i];
    dp[0]=0, dp[1]=arr[1];
    for(int i=2; i<=n; ++i) {
        dp[i] = dp[i-1] + arr[i];
    }
    for(int i=n; i>0; --i) {
        for(int j=i-1; j>=0; --j) {
            if(dp[i]-dp[j] <= k) ++cnt;
        }
    }
    cout << cnt << '\n';
    return 0;
}
