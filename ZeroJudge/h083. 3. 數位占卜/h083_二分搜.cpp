#include<iostream>
#include<vector>
#include<algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<string> vec;

signed main() {
	fastio
	int n, res;
	string s, tmp, x, y;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> s;
		vec.push_back(s);
	}
	sort(vec.begin(), vec.end());
	res = 0;
	for(string str:vec) {
		for(int i=1; i*2<str.size(); ++i) {
			x=str.substr(0, i), y=str.substr(str.size()-i);
			if(x==y) {
				tmp = str.substr(i, str.size()-i*2);
				if(binary_search(vec.begin(), vec.end(), tmp)) {
					++res;
				}
			}
		}
	}
	cout << res << '\n';
	return 0;
}