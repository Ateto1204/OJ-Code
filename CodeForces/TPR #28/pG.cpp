#include<iostream>
#include<vector>
#include<queue>
#define x first
#define y second
#define N 200005
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

long long prefix[N], query[N], sum;
int n, q, k, r, a, b;
vector<pair<int, int>> vec;
priority_queue<int, vector<int>, greater<int>> pq;

signed main() {
    fastio
    cin >> n >> q >> k;
    for(int i=0; i<n; ++i) {
        cin >> a >> b;
        vec.push_back({a, b});
    }

    prefix[1] = vec[0].y;
    for(int i=2; i<=n; ++i) {
        prefix[i] = prefix[i-1] + vec[i-1].y;
    }

    for(int i=0; i<k; ++i) {
        pq.push(vec[i].x-vec[i].y);
        sum += vec[i].x-vec[i].y;
    }
    query[k] = prefix[k] + sum;

    for(int i=k+1; i<=n; ++i) {
        pq.push(vec[i-1].x-vec[i-1].y);
        sum += (vec[i-1].x-vec[i-1].y) - pq.top();
        pq.pop();
        query[i] = prefix[i]+sum;
    }

    while(q--) {
        cin >> r;
        cout << query[r] << '\n';
    }
    return 0;
}
