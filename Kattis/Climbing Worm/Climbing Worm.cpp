#include<bits/stdc++.h>
using namespace std;
signed main(){
    int a,b,c,now=0,cnt=0;
    cin >> a >> b >> c;
    while(now<c){
        now += a;
        cnt++;
        if(now>=c)break;
        else now -= b;
    }
    cout << cnt << '\n';
    return 0;
}
