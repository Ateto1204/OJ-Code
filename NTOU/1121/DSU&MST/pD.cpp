#include <bits/stdc++.h>
#define N 1005
using namespace std;

struct Edge {
    int u, v, w;
    bool operator<(Edge &nxt) {
        return w < nxt.w;
    }
} edge;

string arr[N];
vector<Edge> graph;
vector<pair<int, int> > output;
map<int, int> sz, node;
int n, m, ans, diff;

int find(int x) {
    if( x == node[x] ) return x;
    node[x] = find(node[x]);
    return node[x];
}

void merge(int x, int y) {
    x = find(x), y = find(y);
    if( x == y ) return ;
    if( sz[x] < sz[y] ) swap(x, y);
    sz[x] += sz[y];
    node[y] = x;
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++) {
        sz[i] = 1;
        node[i] = i;
        for(int j=i+1; j<n; j++) {
            diff = 0;
            for(int k=0; k<m; k++) {
                if( arr[i][k] != arr[j][k] ) diff++;
            }
            edge.u = i, edge.v = j, edge.w = diff;
            graph.push_back(edge);
       }
    }
    sort(graph.begin(), graph.end());
    for(int i=0; i<graph.size(); i++) {
        if( find(graph[i].u) != find(graph[i].v) ) {
            output.push_back( {graph[i].u, graph[i].v} );
            merge( graph[i].u, graph[i].v );
            ans += graph[i].w;
            if( sz[ find(graph[i].u) ] == n ) break;
        }
    }
    cout << ans << '\n';
    for(int i=0; i<output.size(); i++) {
        cout << output[i].first << ' ' << output[i].second << '\n';
    }
}
