#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define pii pair<int, int>
using namespace std;

int n, sum, a, b;
vector<pair<int, int>> vec;

bool cmp(pii a, pii b) {
    if(a.y < b.y) return true;
    return a.x > b.x;
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> a >> b;
        vec.push_back({a, b});
    }
    sort(vec.begin(), vec.end(), cmp);
    for(int i=n-1; ~i; --i) {
        if(vec[i].x >= n-i) sum += vec[i].y;
    }
    cout << sum << '\n';
    return 0;
}
