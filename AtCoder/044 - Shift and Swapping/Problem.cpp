#include<iostream>
#include<queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
int n, q, t, a, b, tmp;
deque<int> dq;
signed main() {
    // freopen("output.txt", "w", stdout);
    fastio
    cin >> n >> q;
    for(int i=1; i<=n; ++i) {
        cin >> tmp;
        dq.push_back(tmp);
    }
    while(q--) {
        cin >> t >> a >> b;
        if(t == 1) {
            swap(dq[a-1], dq[b-1]);
        }else if(t == 2) {
            dq.push_front(dq.back());
            dq.pop_back();
        }else if(t == 3) {
            cout << dq[a-1] << '\n';
        }
    }
    return 0;
}






