#include<iostream>
#include<algorithm>
#define N 50
using namespace std;

int arr[N][N], res[N][N], n, mx;

signed main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
	for(int i=0; i<n-1; i+=2) {
		for(int j=0; j<n-1; j+=2) {
			mx = max({arr[i][j], arr[i][j+1], arr[i+1][j], arr[i+1][j+1]});
			res[i/2][j/2] = mx;
		}
	}
	for(int i=0; i<n/2; i++) {
		for(int j=0; j<n/2; j++) {
			cout << res[i][j];
			if(j+1<n/2) cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}