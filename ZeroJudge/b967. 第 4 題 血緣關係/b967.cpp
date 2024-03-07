#include<bits/stdc++.h>
#define N 100005
using namespace std;

vector<int> vec[N];
int arr[N], n, idx, mx, a, b;

void dfs(int now, int pre) {
	for(auto i:vec[now]) {
		if(i != pre) {
			arr[i] = arr[now] + 1;
			dfs(i, now);
		}
	}
}

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	while(cin >> n) {
		for(int i=0; i<n; ++i) {
			vec[i].clear();
		}
		memset(arr, 0, sizeof(arr));
		for(int i=0; i<n-1; ++i) {
			cin >> a >> b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		dfs(0, -1);
		idx=0, mx=0;
		for(int i=0; i<n; ++i) {
			if(arr[i] > mx) {
				mx = arr[i];
				idx = i;
			}
		}
		memset(arr, 0, sizeof(arr));
		dfs(idx, -1);
		for(int i=0; i<n; ++i) {
			if(arr[i] > mx) {
				mx = arr[i];
				idx = i;
			}
		}
		cout << mx << '\n';
	}
}