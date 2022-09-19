#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t, i, mx=0;
    cin >> t;
    string n[t];
    for(i=0; i<t; i++){
        cin >> n[i];
    }
    for(i=0; i<t; i++){
        int tmp = n[i].length();
        mx = max(mx, tmp);
    }
    for(i=0; i<mx; i++){
        for(int j=0; j<t; j++){
            if(i>=n[j].length())continue;
            if(n[j][i] >= 'A' && n[j][i] <= 'Z'){
                cout << n[j][i];
            }
        }
    }
    return 0;
}
