#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
int n[7];
signed main(){
    AC
    int t;
    cin >> t;
    while(t--){
        for(int i=0; i<7; i++)cin >> n[i];
        sort(n, n+7);
        cout << n[0] << ' ' << n[1] << ' ' << n[6]-n[1]-n[0] << '\n';
    }
    return 0;
}
