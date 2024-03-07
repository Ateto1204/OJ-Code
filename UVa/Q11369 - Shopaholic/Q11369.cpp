#include<iostream>
#include<vector>
#include<algorithm>
#define N 20005
using namespace std;

vector<int> vec;
int t, n, ans, tmp;

bool cmp(int a, int b) {
	return a>b;
}

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> t;
	while(t--) {
		ans = 0;
		vec.clear();
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> tmp;
			vec.push_back(tmp);
		}
		sort(vec.begin(), vec.end(), cmp);
		for(int i=2; i<n; i+=3) {
			ans += vec[i];
		}
		cout << ans << '\n';
	}
	return 0;
}