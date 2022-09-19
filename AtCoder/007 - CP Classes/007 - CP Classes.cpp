// AtCoder 不支援 bits/stdc++.h
// 排序後二分搜
// 清楚定義邏輯
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int p[300005], n;
int dis(int le, int ri, int val){
    int mid, idx = -1;
    while(ri - le >= 1){
        mid = (le + ri)/2;
        if(val > p[mid]){
            le = mid+1;
            idx = mid;
        }else{
            ri = mid;
        }
    }
    return idx;
}
signed main(){
    cin >> n;
    for(int i=0; i<n; i++)cin >> p[i];
    sort(p, p+n);
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int d = dis(0, n, k);
        int le = d, ri = d+1, result = 2e9;
        if(le != -1)result = min(result, abs(k-p[le]));
        if(ri < n)result = min(result, abs(k-p[ri]));
        cout << result << '\n';
    }
    return 0;
}
