#include<iostream>
#define N 200005
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int arr[N][3], n;
long long dp[N][3];

signed main() {
	fastio
	cin >> n;
	for(int i=1; i<=n; ++i) {
		for(int j=0; j<3; ++j) {
			cin >> arr[i][j];
		}
	}
	dp[1][1]=dp[2][2]=1e9;
	for(int i=1; i<=n; ++i) {
		dp[i][0] = dp[i-1][0] + arr[i][0];
		if(i > 1) {
			dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + arr[i][1];
		}
		if(i > 2) {
			dp[i][2] = min(dp[i-1][1], dp[i-1][2]) + arr[i][2];
		}
	}
	cout << dp[n][2] << '\n';
	return 0;
}