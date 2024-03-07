#include<bits/stdc++.h>
#define N 100005
using namespace std;

int node[N], sz[N], n, m, ans, a, b;

void init(int n) {
    for(int i=1; i<=n; i++) {
        node[i] = i;
        sz[i] = 1;
    }
}

int find(int x) {
    if( x == node[x] ) return x;
    node[x] = find(node[x]);
    return node[x];
}

bool merge(int x, int y) {
    x = find(x), y = find(y);
    if( x != y ) {
        if( sz[x] < sz[y] ) swap(x, y);
        sz[x] += sz[y];
        node[y] = x;
        return true;
    }
    return false;
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    init(n);
    for(int i=0; i<m; i++) {
        cin >> a >> b;
        merge(a, b);
    }
    for(int i=1; i<n; i++) {
        if( merge(i, i+1) ) {
            ans++;
        }
    }
    cout << ans << '\n';
}
