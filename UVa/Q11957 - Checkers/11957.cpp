#include<iostream>
#include<cstring>
#include<numeric>
#define MOD 1000007
#define N 105
using namespace std;

char arr[N][N];
long long dp[N][N], ans;
int t, n, sx, flag;

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case " << i << ": ";
		memset(dp, 0, sizeof(dp));
		memset(arr, 0, sizeof(arr));
		cin >> n;
		for(int i=1; i<=n; ++i) {
			for(int j=1; j<=n; ++j) {
				cin >> arr[i][j];
			}
		}
		flag = false;
		for(int i=1; i<=n; ++i) {
			for(int j=1; j<=n; ++j) {
				if(arr[i][j] == 'W') {
					dp[i][j] = 1;
					sx = i;
					flag = true;
					break;
				}
			}
			if(flag) break;
		}
		for(int i=sx-1; i>=1; --i) {
			for(int j=1; j<=n; ++j) {
				if(arr[i][j]=='B') continue;
				
				if(i+1<=n && j-1>=1) {
					if(arr[i+1][j-1]=='B') {
						if(i+2<=n && j-2>=1 && arr[i+2][j-2]!='B') {
							dp[i][j] += dp[i+2][j-2];
						}
					}else dp[i][j] += dp[i+1][j-1];
				}
				if(i+1<=n && j+1<=n) {
					if(arr[i+1][j+1]=='B') {
						if(i+2<=n && j+2<=n && arr[i+2][j+2]!='B') {
							dp[i][j] += dp[i+2][j+2];
						}
					}else dp[i][j] += dp[i+1][j+1];
				}
				
				dp[i][j] %= MOD;
			}
		}
		ans = accumulate(dp[1]+1, dp[1]+n+1, 0)%MOD;
		cout << ans << '\n';
	}
	return 0;
}