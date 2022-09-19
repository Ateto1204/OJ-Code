#include<bits/stdc++.h>
using namespace std;
signed main(){
    string n;
    while(getline(cin, n)){
        string tmp = n;
        bool result = 1;
        for(int i=0; i<n.length(); i++){
            if(n[i]>='A' && n[i]<='Z')n[i] += 'a'-'A';
        }
        string cmp = "";
        for(int i=0; i<n.length(); i++){
            if(n[i]>='a' && n[i]<='z')cmp+=n[i];
        }
        for(int i=0; i<cmp.length()/2; i++){
            if(cmp[i] != cmp[cmp.length()-i-1]){
                result = 0;
                break;
            }
        }
        cout << (result?"SETUP! ":"") << tmp << '\n';
    }
}
