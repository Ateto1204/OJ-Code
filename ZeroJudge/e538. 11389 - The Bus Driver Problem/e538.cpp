#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, d, r, ans, tmp;
vector<int> p, q;

bool cmp(int a, int b) {
	return a>b;
}

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	while(cin >> n >> d >> r) {
		if(n==0 && d==0 && r==0) break;
		ans = 0;
		p.clear(), q.clear();
		for(int i=0; i<n; i++) {
			cin >> tmp;
			p.push_back(tmp);
		}
		for(int i=0; i<n; i++) {
			cin >> tmp;
			q.push_back(tmp);
		}
		sort(p.begin(), p.end());
		sort(q.begin(), q.end(), cmp);
		for(int i=0; i<n; i++) {
			if(p[i]+q[i] > d) ans += r*(p[i]+q[i]-d);
		}
		cout << ans << '\n';
	}
}