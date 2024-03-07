#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define x first
#define y second
using namespace std;

vector<pii> vec;
int ans, sum, t, n, p, q;
priority_queue<pii> pq;


bool cmp(pii a, pii b) {
	if(a.y == b.y) return a.x < b.x;
	return a.y < b.y;
}

signed main() {
	fastio
	cin >> t;
	while(t--) {
		ans=sum=0;
		vec.clear();
		while(!pq.empty()) pq.pop();
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> p >> q;
			vec.push_back({p, q});
		}
		sort(vec.begin(), vec.end(), cmp);
		for(int i=0; i<n; i++) {
			
			pq.push(vec[i]);
			sum += vec[i].x;
			if(sum > vec[i].y) {
				sum -= pq.top().x;
				pq.pop();
			}
		}
		cout << pq.size() << '\n';
	}
	return 0;
}