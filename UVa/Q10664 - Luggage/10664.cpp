#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<numeric>
#include<cstring>
#define N 10005
using namespace std;

stringstream ss;
string str;
int dp[N], t, tmp, total, flag;
vector<int> vec;

signed main() {
	cin >> t;
	cin.ignore();
	while(t--) {
		ss.clear(), ss.str("");
		vec.clear();
		memset(dp, 0, sizeof(dp));
		getline(cin, str);
		ss << str;
		while(ss >> tmp) {
			vec.push_back(tmp);
		}
		total = accumulate(vec.begin(), vec.end(), 0);
		dp[0]=true, flag=false;
		for(int i=0; i<vec.size(); ++i) {
			for(int j=total; j>=vec[i]; --j) {
				if(dp[j-vec[i]]) {
					if(j*2 == total) {
						flag = true;
						break;
					}
					dp[j] = true;
				}
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}