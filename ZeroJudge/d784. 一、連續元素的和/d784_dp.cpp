#include<iostream>
#include<algorithm>
#include<cstring>
#define N 1005
using namespace std;

int arr[N], dp[N], n, t, mx;

signed main() {
	cin >> t;
	while(t--) {
		memset(dp, 0, sizeof(dp));
		cin >> n;
		for(int i=1; i<=n; ++i) {
			cin >> arr[i];
		}
		dp[1]=arr[1];
		for(int i=2; i<=n; ++i) {
			dp[i] = max(0, dp[i-1]) + arr[i];
		}
		cout << *max_element(dp+1, dp+n+1) << '\n';
	}
	return 0;
}