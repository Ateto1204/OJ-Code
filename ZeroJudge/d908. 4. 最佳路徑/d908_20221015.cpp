#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

map<string, vector<pair<string, int>>> mp;
string start, a, b;
int n, k;

int dfs(string now, int cost) {
	if(mp[now].size()==0) return cost;
	int node = cost;
	for(auto e:mp[now]) {
		cost = max(cost, dfs(e.x, node+e.y));
	}
	return cost;
}

signed main() {
	
	cin >> start >> n;
	for(int i=0; i<n; ++i) {
		cin >> a >> b >> k;
		mp[a].push_back({b, k});
	}
	cout << dfs(start, 0) << '\n';
	return 0;
}