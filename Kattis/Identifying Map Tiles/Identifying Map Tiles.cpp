#include<bits/stdc++.h>
using namespace std;
signed main(){
    string n;
    cin >> n;
    cout << n.length() << ' ';
    int x=0, y=0;
    int m = n.length();
    for(int i=0; i<m; i++){
        if(n[i]=='1'){
            x+=pow(2,m-i-1);
        }else if(n[i]=='2'){
            y+=pow(2,m-i-1);
        }else if(n[i]=='3'){
            x+=pow(2,m-i-1);
            y+=pow(2,m-i-1);
        }
    }
    cout << x << ' ' << y << '\n';
    return 0;
}
