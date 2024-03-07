#include<iostream>
#include<algorithm>
#define N 10005
using namespace std;

int arr[N], dp[N], n, ans;

signed main() {
	while(cin>>n && n) {
		for(int i=1; i<=n; ++i) {
			cin >> arr[i];
		}
		ans = 0;
		for(int i=1; i<=n; ++i) {
			dp[i] = max(0, dp[i-1]+arr[i]);
			ans = max(ans, dp[i]);
		}
		if(ans) {
			cout << "The maximum winning streak is " << ans << ".\n";
		}else {
			cout << "Losing streak.\n";
		}
	}
	return 0;
}
