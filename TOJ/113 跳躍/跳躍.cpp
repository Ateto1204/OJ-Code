#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    string n, k;
    cin >> n >> k;
    int idx;
    for(int i=0; i<t; i++){
        if(n[i] == 'P'){
            idx = i;
            break;
        }
    }
    if(k == "L")swap(n[idx], n[idx-1]);
    else swap(n[idx], n[idx+1]);
    cout << n << '\n';
    return 0;
}
