#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n%2==0 || n%3==0){
        if(n==2 || n==3)return true;
        return false;
    }
    for(int i=5; i<=(int)sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}

int val(int n){
    int k = 10;
    while(n/k > 0){
        k *= 10;
    }
    return n % (k/10);
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        bool flag = 1;
        cin >> n;
        int tmp = n;
        while(n>=10){
            if(!prime(n)){
                flag = 0;
                break;
            }
            n = val(n);
        }
        cout << tmp;
        if(flag)cout << " is a Prime Day!\n";
        else cout << " isn't a Prime Day!\n";
    }
    return 0;
}
