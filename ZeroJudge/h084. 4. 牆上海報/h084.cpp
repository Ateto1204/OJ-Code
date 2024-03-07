#include<bits/stdc++.h>
#define N 200005
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int h[N], w[N], n, k, le, ri, mid, flag, idx;

signed main() {
	AC
	cin >> n >> k;
	for(int i=1; i<=n; ++i) {
		cin >> h[i];
	}
	for(int i=0; i<k; ++i) {
		cin >> w[i];
	}
	le=1, ri=1e9;
	while(ri >= le) {
		// cout << le << ' ' << ri << ' ';
		mid = (le+ri)/2, idx=0;
		for(int i=1; i<=n; ++i) {
			if(h[i] >= mid) {
				int j;
				flag = true;
				for(j=0; j<w[idx]; ++j) {
					if(h[i+j] < mid) {
						flag = false;
						break;
					}
				}
				i += j;
				if(flag) {
					// i += w[idx];
					idx++;
				}
			}
		}
		// cout << idx << '\n';
		if(idx < k) ri = mid-1;
		else le = mid+1;
	}
	mid = (le+ri)/2;
	cout << mid << '\n';
	return 0;
}