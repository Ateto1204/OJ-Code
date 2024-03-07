#include <bits/stdc++.h>
#define N 1005
using namespace std;

string arr[N], p[N];
int t, n, ans;

void rotate() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            p[i][j] = arr[n-j-1][i];
        }
    }
}

bool check() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] != p[i][j]) {
                return false;
            }
        }
    }
    return true;
}

signed main() {
    cin >> t;
    while( t-- ) {
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++) {
            p[i] = arr[i];
        }
        ans = 0;
        while( !check() ) {
            rotate();
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if( p[i][j] - arr[i][j] < 0) {
                        ans -= p[i][j] - arr[i][j];
                        p[i][j] -= p[i][j] - arr[i][j];
                    }
                }
            }
            for(int i=0; i<n; i++) {
                arr[i] = p[i];
            }
        }
        cout << ans << '\n';
    }
}
