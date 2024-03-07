#include<iostream>
using namespace std;

int a, b, c, k, ans;
bool used[1005];

void dfs(int depth, int sum) {
	if(depth == a) {
		if(sum+c >= k) {
			ans++;
		}
		return ;
	}
	for(int i=1; i<=b; ++i) {
		dfs(depth+1, sum+i);
	}
}

signed main() {
	cin >> a >> b >> c >> k;
	ans = 0;
	dfs(0, 0);
	cout << ans << '\n';
	return 0;
}