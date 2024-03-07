#include<iostream>
#include<vector>
#include<map>
#include<sstream>
#include<cstring>
using namespace std;

int val[128], t, b, ans;
string tmp, str, c;
stringstream ss;
map<char, vector<char>> mp;
char a;

int dfs(char node) {
	if(mp[node].size()==0) return val[node];
	int total = 0;
	for(int i=0; i<mp[node].size(); i++) {
		total = max(total, dfs(mp[node][i]));
	}
	return total+val[node];
}

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	bool first = true;
	cin >> t;
	cin.ignore();
	getline(cin, tmp);
	while(t--) {
		if(!first) cout << '\n';
		ans = 0;
		memset(val, 0, sizeof(val));
		mp.clear();
		while(getline(cin, str)) {
			if(str == "") break;
			ss.str(""), ss.clear(), c.clear();
			ss << str;
			ss >> a >> b;
			val[a] = b;
			if(!first) {
				ss >> c;
				for(int i=0; i<c.size(); i++) {
					mp[a].push_back(c[i]);
				}
			}else first = false;
		}
		for(int i='A'; i<='Z'; i++) {
			ans = max(ans, dfs(i));
		}
		cout << ans << '\n';
	}
	return 0;
}