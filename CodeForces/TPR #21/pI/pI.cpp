#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int const N = 1e5+5;
int arr[N], n, k;

signed main() {
    AC
    cin >> n >> k;
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i) {
        int sum = 0;
        for(int j=0; j<=i; ++j) {
            if(k <= j) break;
            sum += arr[i-j]*(k-j);
        }
        cout << sum;
        if(i+1 < n) cout << ' ';
        else cout << '\n';
    }
    return 0;
}
