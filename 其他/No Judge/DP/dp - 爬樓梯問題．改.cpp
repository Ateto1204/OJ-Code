#include<iostream>
#define N 100005
using namespace std;

int arr[N], dp[N], n;

signed main() {
	cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	dp[1] = arr[1];
	for(int i=2; i<=n; ++i) {
		dp[i] = min(dp[i-1], dp[i-2]) + arr[i];
	}
	cout << dp[n] << '\n';
	return 0;
}