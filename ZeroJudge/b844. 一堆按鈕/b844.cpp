#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int n,m;
    while(cin>>n>>m){
        vector<int> click;
        vector<int> btn;
        for(int i=0; i<n; i++){
            int tmp;
            cin>>tmp;
            click.push_back(tmp);
        }
        for(int i=0; i<m; i++){
            int tmp;
            cin>>tmp;
            btn.push_back(tmp);
        }
        sort(click.begin(), click.end());
        for(int i=0; i<m; i++){
            if((upper_bound(click.begin(), click.end(), btn[i])-click.begin())%2==0)cout<<0<<'\n';
            else cout<<1<<'\n';
        }
    }
    return 0;
}
