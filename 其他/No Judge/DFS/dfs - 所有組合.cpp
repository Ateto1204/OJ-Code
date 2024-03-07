#include<iostream>
using namespace std;

int path[1005], used[1005], n, m;

void dfs(int depth, int start) {
	if(depth == m) {
		for(int i=0; i<m-1; ++i) {
			cout << path[i] << ' ';
		}
		cout << path[m-1] << '\n';
		return ;
	}
	for(int i=start; i<=n; ++i) {
		if(!used[i]) {
			used[i] = true;
			path[depth] = i;
			dfs(depth+1, i+1);
			used[i] = false;
		}
	}
}

signed main() {
	cin >> n >> m;
	dfs(0, 1);
	return 0;
}