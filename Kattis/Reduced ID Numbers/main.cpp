#include<iostream>
#include<set>
#define N 1005
using namespace std;

int arr[N], n, now;
set<int> st;

signed main() {
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> arr[i];
	}
	now = 1;
	while(true) {
		for(int i=0; i<n; ++i) {
			st.insert(arr[i]%now);
		}
		if(st.size() == n) break;
		++now;
		st.clear();
	}
	cout << now << '\n';
	return 0;
}