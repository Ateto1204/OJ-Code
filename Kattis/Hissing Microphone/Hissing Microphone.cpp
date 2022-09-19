#include<bits/stdc++.h>
using namespace std;
signed main(){
    string n;
    cin >> n;
    bool flag = 0;
    for(int i=0; i<n.length(); i++){
        if(n[i] == 's' && n[i+1] == 's'){
            flag = 1;
            break;
        }
    }
    cout << (flag?"":"no ") << "hiss\n";
    return 0;
}
