#include<bits/stdc++.h>
using namespace std;
signed main() {
    int n, m, t, a, b, x, y;
    cin >> n >> m >> t >> x >> y;
    t--;
    while(t--) {
        cin >> a >> b;
        if((pow((n-a), 2)+pow((m-b), 2))<(pow((n-x), 2)+pow((m-y), 2))) {
            x = a, y = b;
        }
    }
    cout << x << ' ' << y << '\n';
    return 0;
}
