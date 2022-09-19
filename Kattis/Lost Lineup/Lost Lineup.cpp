#include<bits/stdc++.h>
using namespace std;
int n[105] = {1};
signed main(){
    int t;
    cin >> t;
    for(int i=1; i<t; i++){
        int k;
        cin >> k;
        n[k+1] = i+1;
    }
    for(int i=0; i<t; i++){
        cout << n[i];
        if(i<t-1)cout << ' ';
        else cout << '\n';
    }
}
