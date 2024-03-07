#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define int long long
using namespace std;

int fpow(int a, int k) {
    int res = 1;
    while(k) {
        if(k & 1)
            res = res * a;
        a = a * a;
        k >>= 1;
    }
    return res;
}

int strtoint(string str, int k) {
    int ans = 0;
    int n = str.size();
    for(int i = n - 1, rep = 1; i >= 0; i--) {
        if(str[i] != '.') {
            ans += ((str[i] - '0') * rep);
            rep *= 10;
        }
    }
    if(k == 5)
        return ans;
    if(str[n - 5 + k] >= '5') {
        ans = ans + fpow(10, 5 - k);
    }
    ans = ans - (ans % fpow(10, 5 - k));
    return ans;
}

signed main() {
    FASTIO;
    int n;
    cin >> n;
    vector<string> a;
    vector<string> b;
    
    a.resize(n), b.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
 
    vector<int> anslist;
    for(int i = 0; i <= 5; i++) {
        int diff = 0;
        for (int j = 0; j < n; j++) {
            diff += abs(strtoint(a[j], i) - strtoint(b[j], i));
        }
        anslist.push_back(diff);
    }
 
    int ans = anslist[0];
    int ansi = 0;
    for(int i = 0; i <= 5; i++) {
        if(ans >= anslist[i]) {
            ans = anslist[i];
            ansi = i;
        }
    }
 
    cout << ansi << ' ';
    cout << fixed << setprecision(5) << ans / 100000.0;
}