#include<iostream>
using namespace std;

int n, r, c, a, b;

signed main() {
    cin >> n;
    for(int t=1; t<=n; t++) {
        cout << "Case #" << t << ": ";
        cin >> r >> c >> a >> b;
        if(r > c) cout << "YES\n";
        else cout << "NO\n";
    }
}