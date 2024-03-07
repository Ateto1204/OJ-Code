#include<iostream>
#include<vector>
#include<algorithm>
#define x first
#define y second
#define pii pair<int, int>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define int long long
using namespace std;

vector<pair<int, int>> vec;
int t, n, p, q;

bool cmp(pii a, pii b) {
	if(a.x==b.x) return a.y < b.y;
	return a.x > b.x;
}

signed main() {
	fastio
	bool first = true;
	cin >> t;
	while(t--) {
		vec.clear();
		if(first) first = false;
		else cout << '\n';
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> p >> q;
			vec.push_back({q*1000000/p, i+1});
		}
		sort(vec.begin(), vec.end(), cmp);
		for(int i=0; i<n; i++) {
			cout << vec[i].y;
			if(i+1 < n) cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}