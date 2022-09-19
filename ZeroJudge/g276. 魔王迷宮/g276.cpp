#include<bits/stdc++.h>
using namespace std;
int border[100][100];
int king[500][4];
bool is_dead[500];
int n,m,k,ans;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    bool isContinue=1;
    cin>>n>>m>>k;
    for(int i=0; i<k; i++){
        cin>>king[i][0]>>king[i][1];
        cin>>king[i][2]>>king[i][3];
    }
    while(isContinue){
        for(int i=0; i<k; i++){
            if(!is_dead[i]){
                border[king[i][0]][king[i][1]]=1;
                king[i][0]+=king[i][2];
                king[i][1]+=king[i][3];
                if(king[i][0]>n||king[i][0]<0||king[i][1]>m||king[i][1]<0){
                    is_dead[i]=1;
                    continue;
                }
                if(border[king[i][0]][king[i][1]]>0){
                    is_dead[i]=1;
                    border[king[i][0]][king[i][1]]=2;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(!is_dead[i])break;
            else if((i+1)==k)isContinue=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(border[i][j])ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
