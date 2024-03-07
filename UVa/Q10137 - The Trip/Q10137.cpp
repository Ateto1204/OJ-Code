#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int arr[1005], n, avg, sum, remain;
double tmp, ans;

signed main() {
	fastio
	while(cin>>n && n) {
		for(int i=0; i<n; i++) {
			cin >> tmp;
			arr[i] = (int)round(tmp*100);
		}
		sum = 0;
		for(int i=0; i<n; i++) {
			sum += arr[i];
		}
		avg = sum/n;
		remain = sum - avg*n;
		sort(arr, arr+n);
		ans = 0.0;
		for(int i=n-1; i>=n-remain; i--) {
			ans += abs(arr[i]-avg-1);
		}
		for(int i=n-1-remain; i>=0; i--) {
			ans += abs(arr[i]-avg);
		}
		ans /= 200.0;
		cout << '$' << fixed << setprecision(2) << ans << '\n';
	}
}