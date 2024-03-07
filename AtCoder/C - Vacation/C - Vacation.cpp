#include<iostream>
#define N 100005
using namespace std;

int arr[N][3];
long long dp[N][3];

signed main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i) {
		for(int j=0; j<3; ++j) {
			cin >> arr[i][j];
		}
	}
	for(int i=0; i<3; ++i) {
		dp[1][i] = arr[1][i];
	}
	for(int i=2; i<=n; ++i) {
		dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + arr[i][0];
		dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + arr[i][1];
		dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + arr[i][2];
	}
	cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << '\n';
	return 0;
}