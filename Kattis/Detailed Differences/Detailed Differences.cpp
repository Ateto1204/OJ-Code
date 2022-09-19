#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        cout << a << '\n' << b << '\n';
        for(int i=0; i<a.length(); i++){
            if(a[i] == b[i])cout << '.';
            else cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
