#include<bits/stdc++.h>
using namespace std;
signed main(){
    cout << "PERFECTION OUTPUT\n";
    int n;
    while(cin >> n && n){
        printf("%5d  ", n);
        if(n==1){
            cout << "DEFICIENT\n";
            continue;
        }
        int sum = 1;
        for(int i=2; i<n; i++){
            if(n%i==0){
                sum += i;
            }
        }
        if(sum == n)cout << "PERFECT\n";
        else if(sum > n)cout << "ABUNDANT\n";
        else cout << "DEFICIENT\n";
    }
    cout << "END OF OUTPUT\n";
    return 0;
}
