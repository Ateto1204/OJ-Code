#include<bits/stdc++.h>
using namespace std;
long long dp[501][501];
int n,m;
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    while(cin>>n>>m){
        for(int i=1; i<=n; i++){
            dp[i][0]=0;
            for(int j=1; j<=n; j++){
                int tmp;
                cin>>tmp;
                dp[i][j]+=dp[i][j-1]+tmp;
            }
        }
        int x1,y1,x2,y2;
        for(int i=0; i<m; i++){
            cin>>y1>>x1>>y2>>x2;
            int sum=0;
            for(int j=y1; j<=y2; j++){
                sum+=dp[j][x2]-dp[j][x1-1];
            }
            cout<<sum<<'\n';
        }
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                dp[i][j]=0;
            }
        }
    }
    return 0;
}
