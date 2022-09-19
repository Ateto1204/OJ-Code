#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define x first
#define y second
using namespace std;

int n, m, g, a, b, day;
vector<pair<int, int>> vec;

signed main() {
    AC
    cin >> n >> m >> g;
    for(int i=0; i<n; ++i) {
        cin >> a >> b;
        vec.push_back({a, b});
    }
//    sort(vec.begin(), vec.end());
    while(true) {
        sort(vec.begin(), vec.end());
        if(vec[0].x >= g) break;
        for(int i=0; i<m; ++i) {
            vec[i].x += vec[i].y;
//            if(vec[i].x >= g) swap(vec[i], vec[m+1]);
        }
        ++day;
    }
    cout << day << '\n';
    return 0;
}


