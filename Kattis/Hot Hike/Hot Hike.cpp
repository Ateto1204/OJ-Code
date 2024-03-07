#include<iostream>
using namespace std;

int arr[55], n, d, t=1e9;

signed main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for(int i=0; i<n-2; i++) {
		if(max(arr[i],arr[i+2]) < t) {
			d = i+1;
			t = max(arr[i], arr[i+2]);
		}
	}
	cout << d << ' ' << t << '\n';
	return 0;
}