#include<iostream>
#include<cstring>
#define N 1000005
using namespace std;

int arr[N], n;
long long dp[N][2];

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	while(cin >> n) {
		memset(dp, 0, sizeof(dp));
		for(int i=1; i<=n; ++i) {
			cin >> arr[i];
		}
		dp[1][1] = arr[1];
		for(int i=2; i<=n; ++i) {
			dp[i][0] = max(dp[i-1][1], dp[i-1][0]);
			dp[i][1] = max(dp[i-1][1], dp[i-1][0]+arr[i]);
		}
		cout << max(dp[n][0], dp[n][1]) << '\n';
	}
	return 0;
}