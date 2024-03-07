#include<iostream>
#include<algorithm>
#define N 200005
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int arr[N], prefix[N];

signed main() {
	fastio
	int n, m, x, y, w;
	long long sum;
	cin >> n >> m;
	while(m--) {
		cin >> x >> y >> w;
		prefix[x] += w;
		prefix[y+1] -= w;
	}
	for(int i=1; i<=n; ++i) {
		cin >> arr[i];
	}
	for(int i=1; i<=n; ++i) {
		prefix[i] += prefix[i-1];
	}
	sort(arr+1, arr+n+1);
	sort(prefix+1, prefix+n+1, greater<int>());
	sum = 0;
	for(int i=1; i<=n; ++i) {
		sum += arr[i]*prefix[i];
	}
	cout << sum << '\n';
	return 0;
}