#include<bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
using namespace std;

int t, n, tmp, sum;

signed main() {
	cin >> t;
	while(t--) {
		cin >> n;
		sum = 0;
		for(int i=0; i<n; i++) {
			cin >> tmp;
			sum += tmp;
		}
		if(sum%2==0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}