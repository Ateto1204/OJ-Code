#include<bits/stdc++.h>
using namespace std;

int n, mx, mn, mid, a, b, flag;
map<int, vector<int>> mp;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    flag = true, mx=-2e9, mn=2e9;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> a >> b;
        mp[a].push_back(b);
        mx = max(mx, b);
        mn = min(mn, b);
    }
    mid = mx+mn;
    for(auto v:mp) {
        vector<int> vec(v.second);
        sort(vec.begin(), vec.end());
        int t = vec.size()/2;
        if(vec.size()%2) ++t;
        for(int i=0; i<t; ++i) {
            if(vec[i]+vec[vec.size()-i-1] != mid) {
                flag = false;
                break;
            }
        }
    }
    if(flag) cout << "success\n";
    else cout << "failure\n";
    return 0;
}
