#include<bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int const N = 2e5;
int arr[N], n, m, t, sum, idx, cnt;
queue<int> q;

signed main() {
    fastio
    cin >> n >> m >> t;
    for(int i=0; i<t; ++i) {
        cin >> arr[i];
    }
    sum = 0, idx = 0;
    while(sum <= n) {
        sum += arr[idx];
        q.push(arr[idx]);
        ++idx;
        if(idx == t) idx = 0;
    }
    queue<int> tmp(q);
    // while(tmp.size()) {
    //     cout << tmp.front() << ' ';
    //     tmp.pop();
    // }
    // cout << '\n';
    sum = 0, cnt = 0;
    while(!q.empty()) {
        if(sum+q.front() <= m) {
            sum += q.front();
            q.pop();
        }else {
            ++cnt;
            sum = 0;
        }
    }
    cout << cnt;
}
