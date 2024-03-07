#include<iostream>
#define N 2
#define M 3
#define MOD 100000007
using namespace std;

int dp[N][M], tmp[N][M], n, sum;
/*
dp[i][j]: 
 i: times of absent
 j: times of agency
*/

signed main() {
	cin >> n;
	dp[0][0] = 1;
	for(int i=1; i<=n; ++i) {
		tmp[0][0] = dp[0][0]+dp[0][1]+dp[0][2];
		tmp[0][1] = dp[0][0];
		tmp[0][2] = dp[0][1];
		tmp[1][0] = tmp[0][0]+dp[1][0]+dp[1][1]+dp[1][2];
		tmp[1][1] = dp[1][0];
		tmp[1][2] = dp[1][1];
		for(int i=0; i<N; ++i) {
			for(int j=0; j<M; ++j) {
				dp[i][j] = tmp[i][j]%MOD;
			}
		}
	}
	for(int i=0; i<N; ++i) {
		for(int j=0; j<M; ++j) {
			sum += dp[i][j];
			sum %= MOD;
		}
	}
	cout << sum << '\n';
	return 0;
}