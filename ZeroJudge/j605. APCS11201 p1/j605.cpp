#include<bits/stdc++.h>
using namespace std;

int n, t, s, mx=-1, res, ans, cnt;

signed main() {
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> t >> s;
		if(s == -1) cnt++;
		if(s > mx) {
			mx = s;
			res = t;
		}
	}
	ans = mx-n-cnt*2;
	if(ans < 0) ans = 0;
	cout << ans << ' ' << res << '\n';
	return 0;
}