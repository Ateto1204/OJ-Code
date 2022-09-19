#include<bits/stdc++.h>
using namespace std;
int p[500005];
bool search(int le, int ri, int val){
    int mid = (ri+le)/2;
    while(ri-le>1){
        if(val == p[mid])return true;
        if(val > p[mid]){
            le = mid;
        }else {
            ri = mid;
        }
        mid = (ri+le)/2;
    }
    return false;
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t,n,k,i;
    cin >> t >> n;
    for(i=1; i<=t; i++)cin >> p[i];
    while(n--){
        cin >> k;
        cout << (search(0, t+1, k)?"Yes":"No") << '\n';
    }
    return 0;
}
