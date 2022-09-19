#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define f first
#define s second
using namespace std;

int const N = 1e6;

signed main() {
//    AC
    int n;
    cin >> n;
    cout << n%(n/2+1) << '\n';
    return 0;
}
