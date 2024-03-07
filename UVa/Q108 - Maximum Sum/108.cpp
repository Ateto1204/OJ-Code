#include<bits/stdc++.h>
#define N 105
using namespace std;

int arr[N][N], prefix[N][N], n, ans;

signed main() {
	cin >> n;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			cin >> arr[i][j];
		}
	}
	// memset(prefix, 0, sizeof(prefix));
	// for(int i=1; i<=n; ++i) {
		// for(int j=1, tmp=0; j<=n; ++j) {
			// tmp += arr[i][j];
			// prefix[i][j] = prefix[i-1][j] + tmp;
		// }
	// }
	ans = 0;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			memset(prefix, 0, sizeof(prefix));
			for(int k=i; k<=n; ++k) {
				for(int l=j, tmp=0; l<=n; ++l) {
					tmp += arr[k][l];
					prefix[k][l] = prefix[k-1][l] + tmp;
					ans = max(ans, prefix[k][l]);
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}