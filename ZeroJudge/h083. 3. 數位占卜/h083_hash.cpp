#include<iostream>
#include<unordered_set>
#include<vector>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
signed main() {
	fastio
	int m, res=0;
	string x, y, tmp;
	cin >> m;
	vector<string> vec(m);
	for(int i=0; i<m; ++i) {
		cin >> vec[i];
	}
	unordered_set<string> ust(vec.begin(), vec.end());
	for(string s:vec) {
		for(int i=1; i*2<s.size(); ++i) {
			x=s.substr(0, i), y=s.substr(s.size()-i);
			if(x == y) {
				tmp = s.substr(i, s.size()-i-i);
				if(ust.find(tmp) != ust.end()) {
					++res;
				}
			}
		}
	}
	cout << res << '\n';
	return 0;
}