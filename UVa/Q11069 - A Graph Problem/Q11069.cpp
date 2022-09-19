#include<bits/stdc++.h>
#define int long long
using namespace std;
int p[77], n;
signed main(){
    p[1] = 1;
    p[2] = 2;
    p[3] = 2;
    for(int i=4; i<=76; i++){
        p[i] = p[i-2] + p[i-3];
    }
    while(cin >> n){
        cout << p[n] << '\n';
    }
    return 0;
}
