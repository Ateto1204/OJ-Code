#include<bits/stdc++.h>
using namespace std;
int way[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
string p[1005];
int used[1005][1005];
int m,n,mx=0, mn=1000005, cnt=0, k=0;
int flag=1;
void dfs(int x, int y){
    k++;
    used[x][y] = 1;
    for(int i=0; i<4; i++){
        int nx = x + way[i][0];
        int ny = y + way[i][1];
        if(nx>=0 && ny>=0 && nx<n && ny<m && p[nx][ny]=='W' && used[nx][ny]==0){
            dfs(nx, ny);
        }
    }
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(p[i][j] == 'W' && used[i][j]==0){
                cnt++;
                k=0;
                dfs(i, j);
                mx = max(mx, k);
                mn = min(mn, k);
                if(k>0)flag = 0;
            }
        }
    }
    if(flag)cout << "0 0 0\n";
    else cout << mx << ' ' << mn << ' ' << cnt << '\n';
    return 0;
}
