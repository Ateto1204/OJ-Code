#include<bits/stdc++.h>
using namespace std;
signed main(){
    int x,y,n,i;
    cin >> x >> y >> n;
    for(i=1; i<=n; i++){
        bool flag = 0;
        if(i%x==0){
            flag = 1;
            cout << "Fizz";
        }
        if(i%y==0){
            flag = 1;
            cout << "Buzz";
        }
        if(!flag)cout << i;
        cout << '\n';
    }
    return 0;
}
