#include<bits/stdc++.h>
using namespace std;

int const N = 205;
int const INF = 1e9;
int a[N], b[N], arr[N], n, idx;
bool flag;

signed main() {
    while(cin >> n) {
        for(int i=0; i<n; ++i) cin >> a[i];
        for(int i=0; i<n; ++i) cin >> b[i];
        for(int i=0; i<n; ++i) {
            idx = INF;
            flag = true;
            for(int j=i; j<n; ++j) {
                if(a[i]==b[j]) {
                    idx = abs(i-j);
                    flag = false;
                    break;
                }
            }
            for(int j=i; j>=0; --j) {
                if(a[i]==b[j]) {
                    idx = min(idx, abs(i-j));
                    flag = false;
                    break;
                }
            }
            if(flag) idx = -1;
            arr[i] = idx;
        }
        cout << arr[0];
        for(int i=1; i<n; ++i) cout << ' ' << arr[i];
        cout << '\n';
    }
    return 0;
}
