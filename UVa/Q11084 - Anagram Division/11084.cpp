#include<iostream>
#include<cstring>
#define int long long
using namespace std;

int path[10005], cnt[10005], n, d, ans, sum;
string s;

void dfs(int depth) {
	if(depth == s.size()) {
		sum = 0;
		for(int i=0; i<s.size(); ++i) {
			sum *= 10;
			sum += path[i];
		}
		if(sum%d==0) ++ans;
		return ;
	}
	for(int i=0; i<=9; ++i) {
		if(cnt[i]) {
			--cnt[i];
			path[depth] = i;
			dfs(depth+1);
			++cnt[i];
		}
	}
}

void solve() {
	memset(cnt, 0, sizeof(cnt));
	for(int i=0; i<s.size(); ++i) {
		++cnt[s[i]-'0'];
	}
	dfs(0);
}

signed main() {
	cin >> n;
	while(n--) {
		ans = 0;
		cin >> s >> d;
		solve();
		cout << ans << '\n';
	}
	return 0;
}