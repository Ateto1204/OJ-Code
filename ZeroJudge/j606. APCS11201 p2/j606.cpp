#include<bits/stdc++.h>
using namespace std;

int a, b, c, idx;
string s, tmp;
vector<string> vec;

signed main() {
	cin >> a >> b >> c >> s;
	tmp = s;
	for(int i=0; i<b; ++i) {
		for(int j=0; j<a; ++j) {
			cin >> idx;
			tmp[idx-1] = s[j];
		}
		s = tmp;
		vec.push_back(s);
	}
	// for(auto i:vec) {
		// cout << i << '\n';
	// }
	for(int i=0; i<c; ++i) {
		for(int j=0; j<b; ++j) {
			cout << vec[j][i];
		}
		cout << '\n';
	}
	return 0;
}