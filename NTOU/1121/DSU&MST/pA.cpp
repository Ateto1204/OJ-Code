#include <bits/stdc++.h>
using namespace std;

map<string, string> node;
map<string, int> sz;
map<string, bool> used;
int t, n;
string a, b;

void init(string s) {
    if( !used[s] ) {
        node[s] = s;
        sz[s] = 1;
        used[s] = true;
    }
}

string find(string s) {
    if( s == node[s] ) return s;
    node[s] = find(node[s]);
    return find(node[s]);
}

void merge(string x, string y) {
    x = find(x), y = find(y);
    if( x == y ) return ;
    if( sz[x] < sz[y] ) swap(x, y);
    sz[x] += sz[y];
    node[y] = x;
}

signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while( t-- ) {
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a >> b;
            init(a), init(b);
            merge(a, b);
            cout << sz[find(a)] << '\n';
        }
        node.clear();
        sz.clear();
        used.clear();
    }
}
