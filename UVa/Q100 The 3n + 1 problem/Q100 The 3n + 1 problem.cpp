#include<bits/stdc++.h>
using namespace std;
signed main(){
    // freopen("output.txt", "w", stdout);
    int a,b;
    while(cin >> a >> b){
        cout << a << ' ' << b << ' ';
        if(a>b)swap(a,b);
        int mx = 0;
        for(int i=a; i<=b; i++){
            int cnt = 0, k = i;
            while(k!=1){
                if(k%2==1)k = k*3+1;
                else k/=2;
                cnt++;
            }
            mx = max(mx, cnt);
        }
        cout << mx+1 << '\n';
    }
    return 0;
}
