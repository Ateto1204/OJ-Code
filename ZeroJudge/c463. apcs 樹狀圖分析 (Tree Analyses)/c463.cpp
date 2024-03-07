#include<iostream>
#include<vector>
#define N 100005
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<int> mp[N];
int parent[N], h[N], n, k, tmp, root;
long long sum;

int dfs(int cur) {
	if(mp[cur].size() == 0) return 0;
	int res=0;
	for(auto i:mp[cur]) {
		res = max(res, dfs(i));
	}
	h[cur] = res + 1;
	return h[cur];
}

signed main() {
	AC
	cin >> n;
	for(int i=1; i<=n; ++i) {
		cin >> k;
		while(k--) {
			cin >> tmp;
			mp[i].push_back(tmp);
			parent[tmp] = i;
		}
	}
	for(int i=1; i<=n; ++i) {
		if(!parent[i]) root = i;
	}
	cout << root << '\n';
	
	dfs(root);
	
	sum = 0;
	for(int i=1; i<=n; ++i) {
		sum += h[i];
	}
	cout << sum << '\n';
	return 0;
}