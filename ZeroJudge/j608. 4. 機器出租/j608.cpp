#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define x first
#define y second
#define MAXN 100005
using namespace std;

int start[MAXN], final[MAXN], n, k, res;
vector<pii> vec;
multiset<int> s;

bool cmp(pii a, pii b) {
	return a.y < b.y;
}

signed main() {
	fastio
	cin >> n >> k;
	vec.resize(n);
	for(int i=0; i<n; i++) {
		cin >> vec[i].x;
	}
	for(int i=0; i<n; i++) {
		cin >> vec[i].y;
	}
	sort(vec.begin(), vec.end(), cmp);
	for(int i=0; i<k; i++) {
		s.insert(0);
	}
	res = 0;
	for(int i=0; i<n; i++) {
		auto it = s.lower_bound(vec[i].x);
		if(it != s.begin()) {
			s.erase(--it);
			s.insert(vec[i].y);
			res++;
		}
	}
	cout << res << '\n';
}