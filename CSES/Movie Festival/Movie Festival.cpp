#include<iostream>
#include<vector>
#include<algorithm>
#define pii pair<int, int>
#define x first
#define y second
using namespace std;

vector<pii> vec;
int n, ans, cur, p, q;

bool cmp(pii a, pii b) {
	return a.y < b.y;
}

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> p >> q;
		vec.push_back({p, q});
	}
	sort(vec.begin(), vec.end(), cmp);
	ans = 1, cur = vec[0].y;
	for(int i=1; i<n; i++) {
		if(vec[i].x >= cur) {
			ans++;
			cur = vec[i].y;
		}
	}
	cout << ans << '\n';
	return 0;
}