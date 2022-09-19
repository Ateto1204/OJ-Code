#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
int n[100005], sum[100005];

signed main(){
    AC
    int t, i, cnt=0;
    cin >> t;
    for(i=1; i<=t; i++)cin >> n[i];
    for(i=1; i<=t; i++)sum[i] = sum[i-1] + n[i];
    int le = 1, ri = t-1;
    while(ri >= 0){
        if(sum[le] == sum[t]-sum[ri]){
            cnt++;
            le++;
            if(le > t)break;
        }
        while(sum[le] > sum[t]-sum[ri]){
            ri--;
            if(ri < 0)break;
        }
        while(sum[le] < sum[t]-sum[ri]){
            le++;
            if(le > t)break;
        }
    }
    cout << cnt << '\n';
    return 0;
}
