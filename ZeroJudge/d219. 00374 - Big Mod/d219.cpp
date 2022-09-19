#include<bits/stdc++.h>
#define int long long
using namespace std;
int b,p,m;
int f(int n){
    if(n == 0)return 1;
    if(n == 1)return b;
    if(n%2==0){
        int tmp = f(n/2)%m;
        return (tmp*tmp)%m;
    }
    return b*f(n-1)%m;
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while(cin >> b >> p >> m){
        if(p==1 || m==1)cout << 0 << '\n';
        else if(b==1)cout << 1 << '\n';
        else cout << f(p)%m << '\n';
    }
    return 0;
}
