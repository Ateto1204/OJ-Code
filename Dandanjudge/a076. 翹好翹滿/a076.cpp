#include<iostream>
#include<vector>
#include<algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define x first
#define y second
using namespace std;

int t, ans, n, p, q, cur;
vector<pair<int, int>> vec;

bool cmp(pii a, pii b) {
	if(a.y == b.y) return a.x < b.x;
	return a.y < b.y;
}

signed main() {
	fastio
	cin >> t;
	while(t--) {
		vec.clear();
		ans = 1;
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> p >> q;
			vec.push_back({p, q});
		}
		sort(vec.begin(), vec.end(), cmp);
		cur = vec[0].y;
		for(int i=1; i<n; i++) {
			if(vec[i].x >= cur) {
				ans++;
				cur = vec[i].y;
			}
		}
		cout << ans << '\n';
	}
}