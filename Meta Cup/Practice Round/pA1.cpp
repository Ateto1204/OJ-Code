#include<iostream>
using namespace std;
signed main() {
	int t, n, s, d, k, bun, meat;
	cin >> n;
	for(int t=1; t<=n; t++) {
		cout << "Case #" << t << ": ";
		cin >> s >> d >> k;
		bun = s*2 + d*2;
		meat = s + d*2;
		if(meat>=k && bun>=k+1) cout << "YES\n";
		else cout << "NO\n";
	}
}