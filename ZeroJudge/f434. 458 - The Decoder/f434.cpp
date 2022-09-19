#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string n;
    while(getline(cin, n)){
    for(int i=0; i<n.length(); i++){
        n[i]-=7;
    }
    cout << n << '\n';
    }
    return 0;
}
