#include<bits/stdc++.h>
#define N 300005
#define x first
#define y second
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int arr[N], n, p, q, idx, cur;
long long prefix[N], le, ri;
vector<pair<int, int>> vec;

signed main() {
	AC
	cin >> n;
	for(int i=1; i<=n; ++i) {
		cin >> arr[i];
		vec.push_back({arr[i], i});
	}
	for(int i=1; i<=n; ++i) {
		prefix[i] = prefix[i-1] + arr[i];
	}
	sort(vec.begin(), vec.end());
	p=1, q=n, idx=0;
	// p, q: current range.
	while(q > p) {
		cur = vec[idx].y;
		while(cur<p || cur>q) {
			idx++;
			cur = vec[idx].y;
		}
		le = prefix[cur-1] - prefix[p-1];
		ri = prefix[q] - prefix[cur];
		// le, ri: range sum.
		if(le > ri) q = cur-1;
		else p = cur+1;
	}
	cout << arr[p] << '\n';;
	return 0;
}