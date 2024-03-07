#include<bits/stdc++.h>
#define N 100005
using namespace std;

int idx[N], h[N], pre[N], n, m, cnt, mx;

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	idx[n+1]=h[n+1]=m;
	for(int i=1; i<=n; ++i) {
		cin >> idx[i];
	}
	for(int i=1; i<=n; ++i) {
		cin >> h[i];
	}
	for(int i=1; i<=n; ++i) {
		pre[i] = i-1;
	}
	for(int i=1; i<=n; ++i) {
		if(idx[i]-h[i]>=idx[pre[i]] || idx[i]+h[i]<=idx[i+1]) {
			++cnt;
			pre[i+1] = pre[i];
			mx = max(mx, h[i]);
			while(pre[i+1] && idx[pre[i+1]]+h[pre[i+1]]<=idx[i+1]) {
				++cnt;
				mx = max(mx, h[pre[i+1]]);
				pre[i+1] = pre[pre[i+1]];
			}
		}
	}
	cout << cnt << '\n' << mx << '\n';
	return 0;
}