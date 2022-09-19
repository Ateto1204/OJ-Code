#include<bits/stdc++.h>
using namespace std;
signed main() {
    int a, b, c, d, result;
    cin >> a >> b >> c >> d;
    result = 20;
    if(a > 2) {
        result += 5*(a-2);
    }
    result += (b/2)*5;
    if(c>=18&&c<23 || d>18&&d<=23) {
        if(c<18) c = 18;
        for(int i=c; i<d; i+=1) {
            result += 185 + 10*(i-18);
        }
    }
    cout << result << '\n';
    return 0;
}
