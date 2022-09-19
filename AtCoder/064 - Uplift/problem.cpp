#include<iostream>
#define N 1000005
using namespace std;

long long arr[N], dis[N], sum;
int n, q;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int le, ri, val;
    cin >> n >> q;
    for(int i=1; i<=n; ++i) {
        cin >> arr[i];
    }
    for(int i=2; i<=n; ++i) {
        dis[i] = arr[i-1]-arr[i];
    }
    sum = 0;
    for(int i=2; i<=n; ++i) {
        sum += abs(dis[i]);
    }

    for(int i=0; i<q; ++i) {
        cin >> le >> ri >> val;
        if(le >= 2) {
            sum += abs(dis[le]-val) - abs(dis[le]);
            dis[le] -= val;
        }
        if(ri<n) {
            sum += abs(dis[ri+1]+val) - abs(dis[ri+1]);
            dis[ri+1] += val;
        }
        cout << sum << '\n';
    }
    return 0;
}

/*
6 6
5 7 6 3 2 1
2 4 3
3 5 -6
3 4 2
3 6 3
1 1 -2
5 5 3
*/
