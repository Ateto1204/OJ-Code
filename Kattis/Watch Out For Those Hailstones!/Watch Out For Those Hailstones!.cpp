#include<bits/stdc++.h>
using namespace std;
signed main(){
    long long n, sum=0;
    cin >> n;
    while(n!=1){
        sum += n;
        if(n%2==0)n/=2;
        else n = n*3+1;
    }
    cout << sum+1 << '\n';
    return 0;
}
