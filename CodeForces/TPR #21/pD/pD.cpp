#include<bits/stdc++.h>
using namespace std;
int n, tmp;
map<int, int> mp;
vector<int> vec;
signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    for(int i=0; i<n*2; ++i) {
        cin >> tmp;
        ++mp[tmp];
    }
    for(auto i:mp) {
        vec.push_back(i.second);
    }
    int k = vec.size();
    if(k!=1) {
        while(true) {
            sort(vec.begin(), vec.end());
            if(vec[k-1]==0 || vec[k-2]==0) break;
            --vec[k-1];
            --vec[k-2];
        }
    }
    cout << vec[k-1]/2 << '\n';
    return 0;
}
