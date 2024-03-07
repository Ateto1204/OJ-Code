#include<bits/stdc++.h>
#define int long long
using namespace std;

map<int, vector<int>> mp;

void solve(int n) {
    int tmp;
    cin >> tmp;
    if(tmp == 0) return ;
    mp[n].push_back(tmp);
    if(tmp%2==0) {
        for(int i=0; i<2; ++i) {
            solve(tmp);
        }
    }else {
        for(int i=0; i<3; ++i) {
            solve(tmp);
        }
    }
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int first, ans=0;
    cin >> first;
    if(first%2==0) {
        for(int i=0; i<2; ++i) {
            solve(first);
        }
    }else {
        for(int i=0; i<3; ++i) {
            solve(first);
        }
    }
    for(auto i:mp) {
        for(auto j:i.second) {
            ans += abs(i.first-j);
        }
    }
    cout << ans << '\n';
    return 0;
}