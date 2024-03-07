#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<map>
#include<iomanip>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

vector<int> p;
int arr[1005], n, k, idx, tmp;
map<int, int> mp;

bool prime(int n) {
	if(n%2==0 || n%3==0 || n%5==0 || n%7==0) {
		if(n==2 || n==3 || n==5 || n==7) return true;
		return false;
	}
	for(int i=11; i<=(int)sqrt(n); i+=2) {
		if(n%i == 0) return false;
	}
	return true;
}

signed main() {
	fastio
	for(int i=2; i<10000; i++) {
		if(prime(i)) p.push_back(i);
	}
	while(cin>>n && n) {
		mp.clear();
		k = 1;
		for(int i=2; i<=n; i++) {
			tmp=i, idx=0;
			while(tmp>=p[idx]) {
				while(tmp%p[idx]==0) {
					tmp /= p[idx];
					mp[idx]++;
				}
				idx++;
			}
			k *= tmp;
		}
		cout << setw(3) << n << "! =";
		int cnt = 0;
		for(auto i:mp) {
			if(cnt>=15) {
				cout << '\n' << "      ";
				cnt = 0;
			}
			cout << setw(3) << i.second;
			cnt++;
		}
		cout << '\n';
	}
}