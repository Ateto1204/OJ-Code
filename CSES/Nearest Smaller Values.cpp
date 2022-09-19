#include<iostream>
#include<vector>
#include<stack>
#define x first
#define y second
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int n, tmp;
vector<pair<int, int>> vec;
stack<pair<int, int>> st;

signed main() {
	fastio
	cin >> n;
	for(int i=1; i<=n; ++i) {
		cin >> tmp;
		vec.push_back({tmp, i});
	}
	st.push({0, 0});
	for(int i=0; i<n; ++i) {
		while(vec[i].x<=st.top().x) {
			st.pop();
		}
		cout << st.top().y;
		st.push(vec[i]);
		if(i+1 < n) cout << ' ';
	}
	cout << '\n';
	return 0;
}