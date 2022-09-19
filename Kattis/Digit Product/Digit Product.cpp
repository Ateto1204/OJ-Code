#include<bits/stdc++.h>
using namespace std;
int val(int n){
    int sum = 1;
    while(n > 0){
        if(n%10!=0)sum *= n%10;
        n /= 10;
    }
    return sum;
}
signed main(){
    int n;
    cin >> n;
    while(n >= 10)n = val(n);
    cout << n << '\n';
    return 0;
}
