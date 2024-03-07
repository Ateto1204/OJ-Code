#include<iostream>
#include<queue>
using namespace std;

int n, ans, sum, tmp;
priority_queue<int, vector<int>, greater<int>> q;

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	while(cin>>n && n) {
		ans = 0;
		while(!q.empty()) {
			q.pop();
		}
		for(int i=0; i<n; i++) {
			cin >> tmp;
			q.push(tmp);
		}
		for(int i=0; i<n-1; i++) {
			sum = q.top();
			q.pop();
			sum += q.top();
			q.pop();
			ans += sum;
			q.push(sum);
		}
		cout << ans << '\n';
	}
}