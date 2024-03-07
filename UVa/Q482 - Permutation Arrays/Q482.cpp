#include<iostream>
#include<vector>
#include<sstream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

vector<int> order;
vector<string> vec;
stringstream ss;
int t, first, idx;
double tmp;
string s;

signed main() {
	fastio
	first = true;
	cin >> t;
	cin.ignore();
	while(t--) {
		if(first) first = false;
		else cout << '\n';
		getline(cin, s);
		order.clear(), vec.clear();
		ss.clear(), ss.str("");
		getline(cin, s);
		ss << s;
		while(ss >> tmp) {
			order.push_back(tmp);
		}
		ss.clear(), ss.str("");
		getline(cin, s);
		ss << s;
		vec.resize(order.size()+5);
		idx = 0;
		while(ss >> s) {
			vec[order[idx]-1] = s;
			idx++;
		}
		for(int i=0; i<order.size(); i++) {
			cout << vec[i] << '\n';
		}
	}
	return 0;
}