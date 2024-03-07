#include<iostream>
#define N 200005
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int arr[N], n, x, tmp, ans;
long long prefix[N];

signed main() {
	AC
	cin >> n >> x;
	for(int i=1; i<=n; ++i) {
		cin >> arr[i];
	}
	for(int i=1; i<=n; ++i) {
		prefix[i] = prefix[i-1] + arr[i];
	}
	tmp = 0;
	for(int i=1; i<=n; ++i) {
		while(prefix[i]-prefix[tmp] > x) tmp++;
		if(prefix[i]-prefix[tmp] == x) ans++;
	}
	cout << ans << '\n';
	return 0;
}