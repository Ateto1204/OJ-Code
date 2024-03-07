#include<iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int a, b, c, d, L, ans;

int f(int x) {
	return a*x*x + b*x + c;
}

signed main() {
	fastio
	while(cin >> a >> b >> c >> d >> L) {
		if(a==0 && b==0 && c==0 && d==0 && L==0) break;
		ans = 0;
		for(int i=0; i<=L; i++) {
			if(f(i)%d == 0) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}