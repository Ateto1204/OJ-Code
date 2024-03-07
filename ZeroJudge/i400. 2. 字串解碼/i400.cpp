#include<iostream>
using namespace std;

int m, n, cnt;
string arr[105], s, tmp;

signed main() {
	cin >> m >> n;
	for(int i=0; i<m; i++) {
		cin >> arr[i];
	}
	cin >> s;
	for(int i=m-1; i>=0; i--) {
		tmp = "";
		cnt = 0;
		for(int j=n-1; j>=0; j--) {
			if(arr[i][j]=='1') {
				tmp += s[j];
				cnt++;
			}
			else tmp = s[j] + tmp;
		}
		if(cnt%2 == 1) {
			int t = tmp.size();
			for(int j=0; j<t/2; j++) {
				swap(tmp[j], tmp[(t+1)/2+j]);
			}
		}
		s = tmp;
	}
	cout << s << '\n';
}