#include<iostream>
#define N 1005
using namespace std;

int arr[N], n, m, sum, mx, idx, le, ri;

signed main() {
	cin >> n >> m;
	for(int i=0; i<n; ++i) {
		cin >> arr[i];
	}
	for(int i=0; i<n; ++i) {
		sum += arr[i];
	}
	for(int i=0; i<n; ++i) {
		if(arr[i] > mx) {
			mx = arr[i];
			idx = i;
		}
	}
	sum -= mx;
	le = ri = m/2;
	if(le >= idx) {
		ri += le-idx;
		le -= le-idx;
	}
	if(ri >= n-idx) {
		le += ri-n+idx+1;
		ri -= ri-n+idx+1;
	}
	for(int i=idx-1, j=0; i>=0&&j<le; --i, ++j) {
		mx += arr[i];
		sum -= arr[i];
	}
	for(int i=idx+1, j=0; i<n&&j<ri; ++i, ++j) {
		mx += arr[i];
		sum -= arr[i];
	}
	cout << mx << ' ' << sum << '\n';
	return 0;
}