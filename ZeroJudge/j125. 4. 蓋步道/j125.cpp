#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define N 305
#define x first
#define y second
#define MAX 1000005
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int way[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
int arr[N][N], n, mid, le, ri;
int used[N][N];


bool bfs(int val) {
	memset(used, false, sizeof(used));
	queue<pair<int, int>> q;
	q.push({1, 1});
	used[1][1] = true;
	while(q.size()) {
		pair<int, int> now(q.front());
		q.pop();
		for(int i=0; i<4; ++i) {
			int nx = now.x + way[i][0];
			int ny = now.y + way[i][1];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&!used[nx][ny]) {
				if(abs(arr[now.x][now.y]-arr[nx][ny]) < val) {
					if(nx==n && ny==n) {
						return true;
					}
					used[nx][ny] = true;
					q.push({nx, ny});
				}
			}
		}
	}
	return false;
}

signed main() {
	fastio
	cin >> n;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			cin >> arr[i][j];
		}
	}
	le=0, ri=MAX;
	while(ri >= le) {
		mid = (le+ri)/2;
		if(bfs(mid)) ri = mid-1;
		else le = mid+1;
	}
	mid = (le+ri)/2;
	cout << mid << '\n';
	
	memset(used, 0, sizeof(used));
	queue<pair<int, int>> q;
	q.push({1, 1});
	used[1][1] = 1;
	while(q.size()) {
		pair<int, int> now(q.front());
		q.pop();
		for(int i=0; i<4; ++i) {
			int nx = now.x + way[i][0];
			int ny = now.y + way[i][1];
			if(nx>=1&&ny>=1&&nx<=n&&ny<=n&&!used[nx][ny]) {
				if(abs(arr[now.x][now.y]-arr[nx][ny]) <= mid) {
					used[nx][ny] = used[now.x][now.y] + 1;
					q.push({nx, ny});
				}
			}
		}
	}
	cout << used[n][n]-1 << '\n';
	return 0;
}