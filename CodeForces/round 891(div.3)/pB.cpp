#include<bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define pii pair<int, int>
using namespace std;

int t;
string s;

signed main() {
	fastio
	cin >> t;
	while(t--) {
		cin >> s;
		reverse(s.begin(), s.end());
		for(int i=s.size()-1; i>=0; i--) {
			if(s[i]-'0' >= 5) {
				int j=i+1;
				if(j==s.size()) s += '0';
				s[j]++;
				while(s[j]-'0' >= 5) {
					j++;
					if(j==s.size()) s += '0';
					s[j]++;
				}
				j--;
				while(j>=0) {
					s[j] = '0';
					j--;
				}
				break;
			}
		}
		reverse(s.begin(), s.end());
		cout << s << '\n';
	}
	return 0;
}