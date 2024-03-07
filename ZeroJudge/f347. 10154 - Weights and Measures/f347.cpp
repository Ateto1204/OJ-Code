#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define pii pair<int, int>
#define x first
#define y second
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int p, q, sum;
vector<pii> vec;
priority_queue<int> pq;

bool cmp(pii a, pii b) {
	if(a.y==b.y) return a.x < b.x;
	return a.y < b.y;
}

signed main() {
	fastio
	while(cin >> p >> q) {
		vec.push_back({p, q});
	}
	sort(vec.begin(), vec.end(), cmp);
	for(int i=0; i<vec.size(); i++) {
		
		pq.push(vec[i].x);
		sum += vec[i].x;
		if(sum > vec[i].y) {
			sum -= pq.top();
			pq.pop();
		}
	}
	cout << pq.size() << '\n';
	return 0;
}