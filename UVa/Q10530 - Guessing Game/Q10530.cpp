#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    // freopen("output.txt", "w", stdout);
    int n, le = 1, ri = 10;
    string s;
    bool result = 1, output = 0;
    while(cin >> n && n){
        cin.ignore();
        getline(cin, s);
        if(s == "too high"){
            if(n < le) result = 0;
            ri = min(ri, n - 1);
            if(ri < le) result = 0;
        }else if(s == "too low"){
            if(n > ri) result = 0;
            le = max(le, n + 1);
            if(le > ri) result = 0;
        }else{
            output = 1;
            if(n<le || n>ri){
                result = 0;
            }
        }
        if(output){
            if(result){
                cout << "Stan may be honest\n";
            }else{
                cout << "Stan is dishonest\n";
            }
            result = 1;
            output = 0;
            le = 1, ri = 10;
        }
    }
    return 0;
}
