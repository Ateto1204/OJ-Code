#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define int long long
#define N 100005
#define x first
#define y second
using namespace std;

int prefix[N], n, tmp;
vector<pair<int, int>> vec;
vector<int> tx, ty;
stack<pair<int, int>> st;

signed main() {
	fastio
	while(cin >> n) {
		vec.clear();
		tx.clear();
		ty.clear();
		memset(prefix, 0, sizeof(prefix));
		while(!st.empty()) st.pop();
		vec.push_back({0, 0});
		
		for(int i=1; i<=n; i++) {
			cin >> tmp;
			vec.push_back({tmp, i});
		}
		for(int i=1; i<=n; i++) {
			prefix[i] = prefix[i-1] + vec[i].x;
		}
		
		st.push({-N, 0});
		for(int i=1; i<=n; i++) {
			while(!st.empty() && vec[i].x<=st.top().x) {
				st.pop();
			}
			tx.push_back(st.top().y);
			st.push(vec[i]);
		}
		while(!st.empty()) st.pop();
		
		st.push({-N, n+1});
		for(int i=n; i>=1; i--) {
			while(!st.empty() && vec[i].x<=st.top().x) {
				st.pop();
			}
			ty.push_back(st.top().y);
			st.push(vec[i]);
		}
		reverse(ty.begin(), ty.end());
		
		
		int ans=0, x, y;
		for(int i=0; i<n; i++) {
			int cal;
			cal = (prefix[ty[i]-1]-prefix[tx[i]])*vec[i+1].x;
			if(cal > ans) {
				ans = cal;
				x = tx[i]+1, y = ty[i]-1;
			}
		}
		cout << ans << '\n' << x << ' ' << y << '\n';
	}
	return 0;
}