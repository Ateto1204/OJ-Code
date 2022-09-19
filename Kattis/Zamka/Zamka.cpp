#include<bits/stdc++.h>
using namespace std;
int val(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
signed main(){
    int a,b,c;
    cin >> a >> b >> c;
    for(int i=a; i<=b; i++){
        if(val(i) == c){
            cout << i << '\n';
            break;
        }
    }
    for(int i=b; i>=a; i--){
        if(val(i) == c){
            cout << i << '\n';
            break;
        }
    }
    return 0;
}
