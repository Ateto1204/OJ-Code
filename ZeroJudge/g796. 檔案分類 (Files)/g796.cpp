#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int k = (n%1000)/10;
        mp[k]++;
    }
    for(auto i:mp)cout << i.first << ' ' << i.second << '\n';
    return 0;
}
