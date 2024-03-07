#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
signed main(){
    AC
    int t;
    cin >> t;
    while(t--){
        int n, d=0;
        cin >> n;
        int mx = 0;
        int p[n];
        for(int i=0; i<n; i++){
            cin >> p[i];
            mx = max(mx, p[i]);
        }
        for(int i=2; i<=mx; i++){
            bool flag = (p[0]%i==0), bol = 1;
            for(int j=1; j<n; j++){
                if(flag == (p[j]%i==0)){
                    bol = 0;
                    break;
                }else flag = !flag;
            }
            if(bol){
                d = i;
            }
        }
        cout << d << '\n';
    }
    return 0;
}
