#include<iostream>
#define N 105
#define W 100005
using namespace std;

long long dp[N][W];
int w[N], v[N], n, m;

signed main() {
	cin >> n >> m;
	for(int i=1; i<=n; ++i) {
		cin >> w[i] >> v[i];
	}
	dp[1][0] = v[1];
	for(int i=1; i<=n; ++i) {
		for(int j=m; j>=0; --j) {
			if(j-w[i]>=0) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
			}else dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][m] << '\n';
	return 0;
}