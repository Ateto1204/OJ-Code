#include<bits/stdc++.h>
using namespace std;
signed main(){
    int a,b,c,cnt=0;
    cin >> a >> b >> c;
    a += b;
    while(a >= c){
        int tmp = a/c;
        cnt += tmp;
        a %= c;
        a += tmp;
    }
    cout << cnt << '\n';
    return 0;
}
