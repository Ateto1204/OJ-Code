#include<bits/stdc++.h>
#define pii pair<int, int>
#define x first
#define y second
#define N 1005
using namespace std;

bool used[N][N];
string arr[N];
int n, m, ans;
int way[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

signed main() {
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if( arr[i][j] == '.' && !used[i][j] ) {
                used[i][j] = true;
                ans++;
                queue<pair<int, int> > q;
                q.push({i, j});
                while( !q.empty() ) {
                    pair<int, int> now(q.front());
                    q.pop();
                    for(int i=0; i<4; i++) {
                        int nx = now.x + way[i][0];
                        int ny = now.y + way[i][1];
                        if( nx>=0 && ny>=0 && nx<n && ny<m ) {
                            if( arr[nx][ny]=='.' && !used[nx][ny] ) {
                                q.push({nx, ny});
                                used[nx][ny] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << '\n';
}
