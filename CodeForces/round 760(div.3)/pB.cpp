#include<bits/stdc++.h>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
signed main(){
    AC
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str, result;
        cin >> result;
        for(int i=1; i<n-3; i++){
            if(result.length() >= n)break;
            cin >> str;
            if(result[result.length()-1] == str[0]){
                if(result[result.length()-2] != str[1]){
                    result += str[1];
                }
            }else result += str;
        }
        if(n>3)cin >> str;
        while(result.length() != n)result += 'a';
        cout << result << '\n';
    }
    return 0;
}
