#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define f first
#define s second
using namespace std;

int const N = 1e3;
int arr[N][N], used[N][N], result[N][N], n, m, x, y, k, tmp;
int way[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

signed main() {
    AC
    cin >> n >> m >> x >> y >> k;
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=m; ++j) {
            cin >> arr[i][j];
        }
    }
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=m; ++j) {
            result[i][j] = arr[i][j];
        }
    }
    tmp = arr[x][y];
    queue<pair<int, int>> q;
    q.push({x, y});
    arr[x][y] = k;
    result[x][y] = k;
    while(!q.empty()) {
        pair<int, int> now(q.front());
        q.pop();
        for(int i=0; i<4; ++i) {
            int nx = way[i][0]+now.f;
            int ny = way[i][1]+now.s;
            if(nx>=1&&ny>=1&&nx<=n&&ny<=m&&arr[nx][ny]==tmp&&used[nx][ny]==0) {
                used[nx][ny] = 1;
                result[nx][ny] = k;
                q.push({nx, ny});
            }
        }
    }
    for(int i=1; i<=n; ++i) {
        cout << result[i][1];
        for(int j=2; j<=m; ++j) {
            cout << ' ' << result[i][j];
        }
        cout << '\n';
    }
    return 0;
}
