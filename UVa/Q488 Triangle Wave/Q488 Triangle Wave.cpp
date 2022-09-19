#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,i,j;
        cin >> n >> m;
        while(m--){
            for(i=1; i<=n; i++){
                for(j=0; j<i; j++){
                    cout << i;
                }
                cout << '\n';
            }
            for(i=n-1; i>=1; i--){
                for(j=0; j<i; j++){
                    cout << i;
                }
                cout << '\n';
            }
            if(t>0 || m>0)cout << '\n';
        }
    }
    return 0;
}
