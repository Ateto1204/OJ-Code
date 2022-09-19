#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define f first
#define s second
using namespace std;

int const N = 1e6;
int const K = 25;
int arr[N][K];

signed main() {
    AC
    int n, m, cnt;
    cin >> n >> m;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            cin >> arr[i][j];
        }
    }
    cnt = 0;
    for(int i=0; i<n-1; ++i) {
        for(int j=i+1; j<n; ++j) {
            bool flag = true;
            for(int k=0; k<m; ++k) {
                if((arr[i][k]+arr[j][k])&1) {
                    flag = false;
                    break;
                }
            }
            if(flag) ++cnt;
        }
    }
    cout << cnt << '\n';
    return 0;
}

