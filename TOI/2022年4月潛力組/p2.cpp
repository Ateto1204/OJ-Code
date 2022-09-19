#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int const N = 1e5+5;
int n, m, aa, bb;
vector<int> a, b;

int bis(int le, int ri) {
    int mid, i, j, x, y, tmp;
    while(ri >= le) {
        x=aa, y=bb;
        mid = (le+ri)/2;
        tmp = a[mid];
        for(int i=0; i<m; ++i) {
            if(tmp > b[i]) ++x;
            else if(tmp < b[i]) ++y;
        }
        if(x <= y || x==aa) le = mid+1;
        else ri = mid-1;
    }
    if(x <= y) return -1;
    return ri+1;
}

signed main() {
    int tmp;
    cin >> n >> m;
    for(int i=0; i<n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i=0; i<m; ++i) {
        cin >> tmp;
        b.push_back(tmp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int idx=0, seg=0;
    for(int i=0; i<n; ++i) {
        idx = seg;
        aa += seg;
        while(idx<n && a[i]>b[idx]) {
            ++aa;
            ++idx;
        }
        seg = idx;
        while(a[i]==b[idx]) ++idx;
        bb += m-idx;
    }
    int k = bis(0, n-1);
    if(k==-1) cout << -1 << '\n';
    else cout << a[k] << '\n';
    return 0;
}
