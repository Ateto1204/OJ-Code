#include<bits/stdc++.h>
using namespace std;
map<string , string> mp;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    mp["HELLO"] = "ENGLISH";
    mp["HOLA"] = "SPANISH";
    mp["HALLO"] = "GERMAN";
    mp["BONJOUR"] = "FRENCH";
    mp["CIAO"] = "ITALIAN";
    mp["ZDRAVSTVUJTE"] = "RUSSIAN";
    string input;
    int cnt = 1;
    while(cin >> input){
        if(input == "#")break;
        string result = mp[input];
        cout << "Case " << cnt++ << ": ";
        if(result == ""){
            cout << "UNKNOWN\n";
        }else{
            cout << result << '\n';
        }
    }
    return 0;
}
