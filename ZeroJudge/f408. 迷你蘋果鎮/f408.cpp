#include<bits/stdc++.h>
using namespace std;
int n[1005];
bool cmp(int a, int b){
    return abs(a) < abs(b);
}
signed main(){
    int t, cnt=0;
    cin >> t;
    for(int i=0; i<t; i++)cin >> n[i];
    sort(n, n+t, cmp);
    int condition = (n[0]>=0);
    for(int i=1; i<t; i++){
        if((n[i]>=0)!=condition)cnt++;
        condition = n[i]>=0;
    }
    cout << cnt << '\n';
    return 0;
}
