#include<bits/stdc++.h>
using namespace std;
int p[100005];
int search(int le, int ri, int val){
    int mid = (le + ri)/2;
    while(ri-le > 0){
        if(val == p[mid])return mid;
        if(val > p[mid])le = mid+1;
        else ri = mid;
        mid = (le + ri)/2;
    }
    return 0;
}
signed main(){
    int t, n, k, i;
    cin >> t >> n;
    for(i=1; i<=t; i++)cin >> p[i];
    while(n--){
        cin >> k;
        cout << search(0, t+1, k) << '\n';
    }
    return 0;
}
