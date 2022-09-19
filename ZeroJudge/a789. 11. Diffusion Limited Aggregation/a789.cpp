#include<bits/stdc++.h>
#define side 11
#define f first
#define s second
using namespace std;
int p[side][side];
int used[side][side];
int way[8][2] = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
signed main(){
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0), cin.tie(0);
    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            used[i][j] = 0;
        }
    }
    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            cin >> p[i][j];
        }
    }
    int x,y;
    queue<pair<int, int>> q;
    while(cin >> y >> x){
        if(x==-1 && y==-1){
            for(int i=0; i<side; i++){
                for(int j=0; j<side; j++){
                    if(used[i][j])cout << '*';
                    else cout << '.';
                }
                cout << '\n';
            }
            for(int i=0; i<side; i++){
                for(int j=0; j<side; j++){
                    used[i][j] = 0;
                }
            }
            for(int i=0; i<side; i++){
                for(int j=0; j<side; j++){
                    cin >> p[i][j];
                }
            }
            continue;
        }
        q.push({x, y});
        while(!q.empty()){
            used[x][y] = 1;
            pair<int, int> now(q.front());
            q.pop();
            int mn = 2e9;
            int rx = -1, ry = -1;
            for(int i=0; i<8; i++){
                int nx = now.f + way[i][0];
                int ny = now.s + way[i][1];
                if(nx>=0&&ny>=0&&nx<side&&ny<side && p[nx][ny]<p[now.f][now.s]){
                    if(p[nx][ny] < mn){
                        mn = p[nx][ny];
                        rx = nx;
                        ry = ny;
                    }
                }
            }
            if(rx>=0 && ry>=0 && used[rx][ry]==0){
                used[rx][ry] = 1;
                q.push({rx, ry});
            }
        }
    }
    return 0;
}
