#include<iostream>
using namespace std;

int arr[25], n, m, t, s, mx, first, flag;

signed main() {
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		mx = 0;
		for(int j=0; j<m; j++) {
			cin >> t;
			mx = max(mx, t);
		}
		s += mx;
		arr[i] = mx;
	}
	cout << s << '\n';
	first = flag = true;
	for(int i=0; i<n; i++) {
		if(s%arr[i]==0) {
			if(first) first=false, flag=false;
			else cout << ' ';
			cout << arr[i];
		}
	}
	if(flag) cout << -1;
	cout << '\n';
	return 0;
}