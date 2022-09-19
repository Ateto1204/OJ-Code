#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int const N = 1e5+5;
double arr[N], result[N], sum;
int n, t;

signed main() {
    AC
    cin >> n >> t;
    for(int i=0; i<t; ++i) {
        cin >> arr[i];
    }
    sum = 0;
    for(int i=0; i<t; ++i) {
        sum += arr[i]/100;
    }
    for(int i=0; i<t; ++i) {
        result[i] = n/sum*arr[i]/100;
    }
    for(int i=0; i<t; ++i) {
        cout << fixed << setprecision(1) << result[i];
        if(i+1 < t) cout << ' ';
        else cout << '\n';
    }
    return 0;
}
