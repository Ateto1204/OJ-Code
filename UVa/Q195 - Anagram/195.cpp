#include<iostream>
#include<cstring>
using namespace std;

char path[10005];
int cnt[128], n;
string s;

void dfs(int depth) {
	if(depth == s.size()) {
		for(int i=0; i<s.size(); ++i) {
			cout << path[i];
		}
		cout << '\n';
		return ;
	}
	for(int i=0; i<52; ++i) {
		char ch;
		if(i%2==0) ch = 'A'+i/2;
		else ch = 'a'+i/2;
		if(cnt[ch]) {
			--cnt[ch];
			path[depth] = ch;
			dfs(depth+1);
			++cnt[ch];
		}
	}
}

void solve() {
	memset(cnt, 0, sizeof(cnt));
	for(int i=0; i<s.size(); ++i) {
		++cnt[s[i]];
	}
	dfs(0);
}

signed main() {
	cin >> n;
	while(n--) {
		cin >> s;
		solve();
	}
	return 0;
}