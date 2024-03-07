#include<iostream>
using namespace std;

int sol(int n) {
    int res = 0;
    while(n > 0) {
        res = max(res, n%10);
        n /= 10;
    }
    return res;
}

signed main() {
    int n, ans=0;
    cin >> n;
    while(n > 0) {
        n -= sol(n);
        ans++;
    }
    cout << ans << '\n';
}
