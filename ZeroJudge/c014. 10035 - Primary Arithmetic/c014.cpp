#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
    string result = "";
    for(int i=str.length() - 1; i>=0; i--){
        result += str[i];
    }
    return result;
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string a,b;
    while(cin >> a >> b){
        if(a=="0" && b=="0")break;
        a = reverse(a);
        b = reverse(b);
        if(b.length() > a.length()){
            string tmp = a;
            a = b;
            b = tmp;
        }
        int cnt = 0;
        for(int i=0; i<b.length(); i++){
            if(a[i]+b[i] > '9' + '0'){
                cnt++;
                a[i + 1]++;
                while(a[i + 1] > '9' && i + 1 < a.length()){
                    a[i + 1] = '0';
                    cnt++;
                    i++;
                    a[i + 1]++;
                }
            }
        }
        if(!cnt){
            cout << "No carry operation.\n";
        }else{
            cout << cnt << " carry operation";
            if(cnt > 1)cout << "s.\n";
            else cout << ".\n";
        }
    }
    return 0;
}
