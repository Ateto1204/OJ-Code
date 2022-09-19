#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#define N 2000005
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define ll long long
using namespace std;

vector<ll> vec, tmp;
map<int, ll> mp, num;
ll arr[N], ans;
int val[N], n, k, p, t;

signed main() {
    fastio
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> k >> p >> t;
        tmp.push_back(k-p);
        tmp.push_back(k+p+1);
        ++num[k-p];
        --num[k+p+1];
        mp[k-p] += t;
        mp[k+p+1] -= t;
    }
    sort(tmp.begin(), tmp.end());
    vec.push_back(tmp[0]);
    for(int i=1; i<tmp.size(); ++i) {
        if(tmp[i] != tmp[i-1]) {
            vec.push_back(tmp[i]);
        }
    }
    val[0] = num[vec[0]];
    for(int i=1; i<vec.size(); ++i) {
        val[i] = num[vec[i]] + val[i-1];
    }
    arr[0] = mp[vec[0]];
    for(int i=1; i<vec.size(); ++i) {
        arr[i] = mp[vec[i]] + arr[i-1];
    }
    for(int i=0; i<vec.size(); ++i) {
        arr[i] *= val[i];
    }
    for(int i=0; i<vec.size(); ++i) {
        ans = max(ans, arr[i]);
    }
    cout << ans << '\n';

    return 0;
}
