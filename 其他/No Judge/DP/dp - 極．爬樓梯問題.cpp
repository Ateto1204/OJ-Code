#include<iostream>
using namespace std;

int dp[10005][5], n, ans;

signed main() {
	cin >> n;
	dp[1][1] = dp[2][2] = dp[3][3] = 1;
	for(int i=2; i<=n; i++) {
		dp[i][1] += dp[i-1][2] + dp[i-1][3];
		dp[i][2] += dp[i-2][1] + dp[i-2][3];
		if(i >= 3)
			dp[i][3] += dp[i-3][1] + dp[i-3][2];
	}
	ans = dp[n][1]+dp[n][2]+dp[n][3];
	cout << ans << '\n';
}