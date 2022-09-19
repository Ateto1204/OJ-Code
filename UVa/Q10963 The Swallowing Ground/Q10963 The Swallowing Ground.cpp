#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int mn = 2e9;
        mn = min(abs(a-b), mn);
        int k[n];
        k[0] = abs(a-b);
        for(int i=1; i<n; i++){
            cin >> a >> b;
            k[i] = abs(a-b);
            mn = min(abs(a-b), mn);
        }
        bool flag = 1;
        for(int i=0; i<n; i++){
            if(k[i] != mn){
                flag = 0;
                break;
            }
        }
        cout << (flag?"yes":"no") << '\n';
        if(t>=1)cout << '\n';
    }
    return 0;
}
