#include<iostream>
#include<numeric>
#define N 120005
#define MOD 100000007
using namespace std;

int dp[N][6], n;

void solve() {
	dp[1][0]=dp[1][1]=dp[1][3]=1;
	for(int i=2; i<=n; ++i) {
		dp[i][0]=dp[i-1][0], dp[i][3]=dp[i-1][3];
		for(int j=1; j<3; ++j) {
			dp[i][0] += dp[i-1][j];
		}
		dp[i][3] += dp[i][0];
		for(int j=4; j<6; ++j) {
			dp[i][3] += dp[i-1][j];
		}
		for(int j=0; j<6; ++j) {
			if(j==0 || j==3) continue;
			dp[i][j] = dp[i-1][j-1];
		}
		dp[i][0] %= MOD;
		dp[i][3] %= MOD;
	}
	cout << accumulate(dp[n], dp[n]+6, 0)%MOD << '\n';
}

signed main() {
	cin >> n;
	solve();
	return 0;
}

/*
dp[i][j]: 

code | absent | agency
-----------------------
  0  |   0    |   0
  1  |   0    |   1
  2  |   0    |   2
  3  |   1    |   0
  4  |   1    |   1
  5  |   1    |   2

*/