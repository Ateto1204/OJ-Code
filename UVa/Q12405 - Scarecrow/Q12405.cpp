#include<iostream>
using namespace std;

int t, n, ans;
string s;

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> t;
	for(int i=1; i<=t; i++) {
		ans = 0;
		cout << "Case " << i << ": ";
		cin >> n >> s;
		for(int j=0; j<n; j++) {
			if(s[j]=='.') {
				ans++;
				for(int k=0; k<3; k++) {
					if(j+k<n) s[j+k]='#';
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}