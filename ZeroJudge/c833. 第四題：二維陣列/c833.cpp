#include<bits/stdc++.h>
using namespace std;

string p[3005];
int way[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)cin >> p[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(p[i][j] == '#'){
                for(int k=0; k<4; k++){
                    int nx = i + way[k][0];
                    int ny = j + way[k][1];
                    while(nx>=0 && ny>=0 && nx<n && ny<m){
                        if(p[nx][ny] == '.')p[nx][ny] = '*';
                        else if(p[nx][ny] == '#')break;
                        nx += way[k][0];
                        ny += way[k][1];
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(p[i][j]=='#' || p[i][j]=='*')cout << '#';
            else cout << 'X';
        }
        cout << '\n';
    }
    return 0;
}
