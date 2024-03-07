#include <bits/stdc++.h>
#define int long long
#define N 1000000
using namespace std;

vector<int> prime;
bool isprime[N+5], res;
int t, n, cnt, le, ri, mid;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    memset(isprime, true, sizeof(isprime));
    for(int i=2; i<=N; i++) {
        if( isprime[i] ) {
            prime.push_back(i);
            for(int j=i; i*j<=N; j++) {
                isprime[i*j] = false;
            }
        }
    }
    cin >> t;
    while( t-- ) {
        cin >> n;
        res = false;
        le = 0, ri = prime.size();
        while( ri > le ) {
            mid = (ri+le) / 2;
            if( prime[mid]*prime[mid] > n ) {
                ri = mid;
            }else if( prime[mid]*prime[mid] < n ) {
                le = mid + 1;
            }else if( prime[mid]*prime[mid] == n ) {
                res = true;
                break;
            }
        }
        mid = (ri+le) / 2;
        if( prime[mid]*prime[mid] == n) res = true;
        if( res ) cout << "YES\n";
        else cout << "NO\n";
    }
}
