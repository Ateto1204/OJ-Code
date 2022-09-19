#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define txt freopen("output.txt", "w", stdout);
using namespace std;
signed main(){
    AC
    int a,b,c;
    while(cin >> a >> b >> c){
        int m = b, n = 1, k = 0;
        while(m > n){
            if(m%2==1)k+=n;
            m /= 2;
            n *= 2;
        }
        int result = 1, p=1, i;
        for(i=0; i<m; i++){
            p *= a;
            p %= c;
        }
        for(i=0; i<n; i++){
            result *= p;
            result %= c;
        }
        for(i=0; i<k; i++){
            result *= a;
            result %= c;
        }
        cout << result << '\n';
    }
    return 0;
}
