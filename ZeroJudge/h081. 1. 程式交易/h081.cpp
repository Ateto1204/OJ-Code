#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,d,sum=0,now=-1,k,prev=10000000;
    cin >> n >> d;
    while(n--){
        cin >> k;
        if(now == -1 && prev-k >= d){
            now = k;
        }
        if(now!=-1 && k-now >= d){
            prev = k;
            sum += k-now;
            now = -1;
        }
    }
    cout << sum << '\n';
    return 0;
}
