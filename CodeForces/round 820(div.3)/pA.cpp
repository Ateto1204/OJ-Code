#include<iostream>
using namespace std;
signed main() {
	int t, a, b ,c, val;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		
		if(c>b) val = (c-b)+(c-1);
		else val = b-1;
		
		if(a-1<val) cout << 1;
		else if(a-1>val) cout << 2;
		else cout << 3;
		cout << '\n';
	}
	return 0;
}