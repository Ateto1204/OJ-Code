#include <bits/stdc++.h>
#define N 200005
#define MOD 1000000009L
#define int long long
using namespace std;

int arr[N];
int n, sum, top, bottom;

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	sum = 0;
	for(int i=0; i<n; i++) {
		sum += arr[i];
	}
	sum *= 2;
	bottom = sum * (sum-1);
	for(int i=0; i<n; i++) {
		top += arr[i] * (sum-arr[i]-1) * 2;
	}
	int tmp = __gcd(top, bottom);
	top /= tmp;
	bottom /= tmp;
	
	tmp = 1;
	for(int i=bottom, j=MOD-2; j; j>>=1, i*=i) {
		i %= MOD;
		if(j & 1) {
			tmp *= i % MOD;
			tmp %= MOD;
		}
	}
	tmp *= top % MOD;
	tmp %= MOD;
	cout << tmp << '\n';
}