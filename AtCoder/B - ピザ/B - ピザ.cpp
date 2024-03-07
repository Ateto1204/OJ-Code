#include<iostream>
#include<vector>
#include<algorithm>
#define add emplace_back
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int d, n, m, tmp, le, ri, mid, ans;
vector<int> shop;

signed main() {
	fastio
	cin >> d >> n >> m;
	shop.add(0);
	shop.add(d);
	for(int i=0; i<n-1; ++i) {
		cin >> tmp;
		shop.add(tmp);
	}
	sort(shop.begin(), shop.end());
	ans = 0;
	for(int i=0; i<m; ++i) {
		cin >> tmp;
		le=0, ri=shop.size();
		while(ri >= le) {
			mid = (le+ri)/2;
			if(abs(shop[mid]-tmp)>abs(shop[mid-1]-tmp)) {
				ri = mid-1;
			}else {
				le = mid+1;
			}
		}
		mid = (le+ri)/2;
		ans += abs(shop[mid]-tmp);
	}
	cout << ans << '\n';
	return 0;
}