#include<iostream>
#include<vector>
#include<algorithm>
#define N 55
using namespace std;

int arr[N][N], n, m, sum;
vector<pair<int, int>> vec;

signed main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> arr[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			sum = 0;
			for(int x=0; x<n; x++) {
				for(int y=0; y<m; y++) {
					if(abs(i-x)+abs(j-y)<=arr[i][j]) {
						sum += arr[x][y];
					}
				}
			}
			if(sum%10 == arr[i][j]) {
				vec.push_back({i, j});
			}
		}
	}
	sort(vec.begin(), vec.end());
	cout << vec.size() << '\n';
	for(int i=0; i<vec.size(); i++) {
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}
}