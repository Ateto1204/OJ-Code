#include<bits/stdc++.h>
#define int long long
#define N 100005
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int,int>
#define x first
#define y second
using namespace std;

int s[N], t[N], n, k, cur, cnt;
vector<pair<int, int>> vec;

bool cmp(pii a, pii b) {
	if(a.y-a.x == b.y-b.x) {
		if(a.x == b.x) return a.y < b.y;
		return a.x < b.x;
	}
	return a.y-a.x < b.y-b.x;
}

signed main() {
	AC
	cin >> n >> k;
	for(int i=0; i<n; ++i) {
		cin >> s[i];
	}
	for(int i=0; i<n; ++i) {
		cin >> t[i];
	}
	for(int i=0; i<n; ++i) {
		vec.push_back({s[i], t[i]});
	}
	sort(vec.begin(), vec.end(), cmp);
	cur=0;
	for(auto i:vec) {
		if(i.x > cur) {
			cnt++;
			cur = i.y;
		}
	}
	cout << cnt << '\n';
	return 0;
}