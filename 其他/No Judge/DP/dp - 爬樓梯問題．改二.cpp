#include<iostream>
using namespace std;

int arr[1005], dp[1005][10], n;

signed main() {
	cin >> n;
	for(int i=1; i<=n; ++i) {
		cin >> arr[i];
	}
	
	dp[1][arr[1]%10] = dp[2][arr[2]%10] = true;
	for(int i=2; i<=n; i++) {
		for(int j=0; j<=9; j++) {
			if(dp[i-1][j] || dp[i-2][j]) {
				dp[i][(arr[i]+j)%10] = true;
			}
		}
	}
	
	for(int i=0; i<=9; i++) {
		if(dp[n][i]) {
			cout << i << '\n';
			break;
		}
	}
	return 0;
}