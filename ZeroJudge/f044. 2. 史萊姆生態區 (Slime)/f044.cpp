#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b)a%=b;
        else b%=a;
    }
    return max(a,b);
}
signed main(){
    int a,b,cnt=0;
    cin >> a >> b;
    int tmp = gcd(a,b);
    a /= tmp;
    b /= tmp;
    tmp = a+b;
    while(tmp > 1){
        tmp /= 2;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
