#include<iostream>
#include<cstring>
#define N 205
using namespace std;

int dp[N][2<<9], a[N], b[N], n, m;

int sol(int pos, int mask) {
	if(dp[pos][mask] != -1) return dp[pos][mask];
	if(pos == n) {
		dp[pos][mask] = mask;
		return mask;
	}
	int res = 2<<9;
	for(int i=0; i<m; i++) {
		res = min(res, sol(pos+1, mask|(a[pos]&b[i]) ));
	}
	dp[pos][mask] = res;
	return res;
}

signed main() {
	cin >> n >> m;
	memset(dp, -1, sizeof(dp));
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=0; i<m; i++) {
		cin >> b[i];
	}
	cout << sol(0, 0) << '\n';
}