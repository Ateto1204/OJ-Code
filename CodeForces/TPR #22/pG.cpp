#include<bits/stdc++.h>
using namespace std;
int arr[5], path[5], used[5], cnt, k;
set<int> st;
void dfs(int start, int depth, int level) {
    if(depth == level) {
        int sum, i;
        for(i=0, sum=0; i<level; ++i) {
            // cout << path[i] << ' ';
            sum += path[i];
        }
        // cout << '\n';
        if(sum <= k) st.insert(sum);
        return ;
    }
    for(int i=start; i<=level; ++i) {
        if(!used[i]) {
            used[i] = true;
            path[depth] = arr[i];
            dfs(i+1, depth+1, level);
            used[i] = false;
        }
    }
}
signed main() {
    for(int i=0; i<5; ++i) {
        cin >> arr[i];
    }
    cin >> k;
    for(int i=0; i<5; ++i) {
        for(int j=1; j<=5; ++j) {
            dfs(i, 0, i+j);
        }
    }
    // for(int i:st) cout << i << ' ';
    // cout << '\n';
    cout << st.size()+1 << '\n';
}
