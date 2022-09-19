#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    cin >> t;
    if(t%2==1)cout << "still running\n";
    else{
        int sum = 0;
        while(t){
            int a,b;
            cin >> a >> b;
            sum += abs(a-b);
            t-=2;
        }
        cout << sum << '\n';
    }
    return 0;
}
