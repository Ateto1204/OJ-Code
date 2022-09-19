#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
bool prime(int n){
    if(n%2==0 || n%3==0){
        if(n==2 || n==3)return true;
        return false;
    }
    for(int i=5; i<=(int)sqrt(n); i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int reverse(int n){
    int result = 0, tmp=n;
    while(tmp > 0){
        result *= 10;
        result += tmp%10;
        tmp /= 10;
    }
    if(result == n)return 4;
    return result;
}
signed main(){
    AC
    int n;
    while(cin >> n){
        int k = reverse(n);
        // cout << k << '\n';
        cout << n << " is ";
        if(prime(n)){
            if(prime(k)){
                cout << "emirp.\n";
            }else{
                cout << "prime.\n";
            }
        }else{
            cout << "not prime.\n";
        }
    }
    return 0;
}
