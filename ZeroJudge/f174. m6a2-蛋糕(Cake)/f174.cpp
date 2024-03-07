#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define N 100005
#define x first
#define y second
using namespace std;

int arr[N], n, k, ans;
vector<pair<int, int>> prefix;
deque<pair<int, int>> q;

signed main() {
	fastio
	cin >> n >> k;
	for(int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	prefix.push_back({0, 0});
	for(int i=1; i<=n; i++) {
		prefix.push_back({(prefix[i-1].x+arr[i]), i});
	}
	q.push_back({0, 0});
	for(int i=1; i<=n; i++) {
		while(q.size()>0 && prefix[i].x<=q.back().x) {
			q.pop_back();
		}
		if(i>=k && q.size()>0 && q.front().y+k<i) {
			q.pop_front();
		}
		q.push_back(prefix[i]);
		ans = max(ans, prefix[i].x-q.front().x);
	}
	cout << ans << '\n';
	return 0;
}