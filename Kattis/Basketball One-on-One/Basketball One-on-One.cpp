#include<bits/stdc++.h>
using namespace std;
signed main(){
    string n;
    cin >> n;
    int a=0, b=0;
    for(int i=0; i<n.length(); i+=2){
        if(n[i] == 'A'){
            a += n[i+1]-'0';
        }else{
            b += n[i+1]-'0';
        }
    }
    if(a>b)cout << "A\n";
    else cout << "B\n";
    return 0;
}
