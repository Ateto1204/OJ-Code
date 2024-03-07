#include <bits/stdc++.h>
#define N 300005
#define int long long
using namespace std;

int f[N], sz[N], res[N];
int n, m, k;
int a, b, w;
int p, h;

struct Query {
	int p;
	int h;
	int idx;
} querys[N];

struct Edge {
	int u;
	int v;
	int w;
	
	bool operator<(const Edge& rhs) {
		return w > rhs.w;
	}
	
} graph[N];

int find(int x) {
	if(x == f[x]) return x;
	f[x] = find(f[x]);
	return f[x];
}

void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if(x == y) return ;
	if(sz[y] > sz[x]) swap(x, y);
	sz[x] += sz[y];
	f[y] = x;
}

bool cmp(Query x, Query y) {
	return x.h > y.h;
}

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m >> k;
	
	for(int i=1; i<=n; i++) {
		f[i] = i;
		sz[i] = 1;
	}
	
	for(int i=0; i<m; i++) {
		cin >> a >> b >> w;
		graph[i] = {a, b, w};
	}
	sort(graph, graph + m);
	
	for(int i=0; i<k; i++) {
		cin >> p >> h;
		querys[i] = {p, h, i};
	}
	sort(querys, querys + k, cmp);
	
	int idx = 0;
	for(int i=0; i<k; i++) {
		while(idx < m) {
			if(graph[idx].w < querys[i].h) break;
			merge(graph[idx].u, graph[idx].v);
			idx++;
		}
		res[querys[i].idx] += sz[find(querys[i].p)];
	}
	for(int i=0; i<k; i++) {
		cout << res[i] << '\n';
	}
}