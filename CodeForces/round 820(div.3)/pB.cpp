#include<iostream>
using namespace std;
signed main() {
	int t, n;;
	string s;
	cin >> t;
	while(t--) {
		string res;
		cin >> n >> s;
		for(int i=0; i<n; ++i) {
			if(i+2<n&&s[i+2]=='0'&&s[i+3]!='0') {
				char ch = 'a'+(s[i]-'0')*10+(s[i+1]-'0')-1;
				res.push_back(ch);
				i+=2;
			}else {
				char ch = 'a'+(s[i]-'0')-1;
				res.push_back(ch);
			}
		}
		cout << res << '\n';
	}
	return 0;
}