#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<numeric>
#define N 105
#define K 10
using namespace std;

int n, k;
double dp[N][K];

double solve() {
	memset(dp, 0, sizeof(dp));
	for(int i=0; i<=k; ++i) {
		dp[1][i] = 1;
	}
	for(int i=2; i<=n; ++i) {
		for(int j=0; j<=k; ++j) {
			if(j == 0) {
				dp[i][j] = dp[i-1][j] + dp[i-1][j+1];
			}else if(j == k) {
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
			}else {
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1];
			}
		}
	}
	double cnt, total;
	cnt = 0.0;
	for(int i=0; i<=k; ++i) {
		cnt += dp[n][i];
	}
	total = pow((double)k+1, n);
	return cnt/total*100.0;
}

signed main() {
	while(cin >> k >> n) {
		cout << fixed << setprecision(5) << solve() << '\n';
	}
	return 0;
}