#include<bits/stdc++.h>
using namespace std;
int p[1005][1005];
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> p[i][j];
        }
    }
    for(int i=0; i<n; i++){
        int flag = -1;
        for(int j=0; j<m; j++){
            if(p[i][j] == 1){
                if(flag == -1){
                    flag = j;
                }else{
                    for(int k=j; k>=flag; k--){
                        p[i][k] = 1;
                    }
                    flag = -1;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << p[i][j];
            if(j + 1<m)cout << ' ';
            else cout << '\n';
        }
    }
    return 0;
}
