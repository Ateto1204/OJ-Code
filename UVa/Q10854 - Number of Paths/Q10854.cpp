#include<iostream>
#define int long long
using namespace std;
int f(){
    int way=1, branch=0;
    string s;
    while(cin >> s){
        if(s == "IF"){
            branch = f();
            branch += f();
            way *= branch;
        }else if(s != "IF" && s != "S"){
            break;
        }
    }
    return way;
}
signed main(){
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        int ans = f();
        cout << ans << '\n';
    }
    return 0;
}
