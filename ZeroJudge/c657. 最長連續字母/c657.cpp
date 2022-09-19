#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    while(cin >> s){
        int k=1;
        char now = s[0];
        vector<pair<char, int>> vec;
        for(int i=1; i<s.length(); i++){
            while(s[i] == now && i<s.length()){
                k++;
                i++;
            }
            vec.push_back({now, k});
            now = s[i];
            k=1;
        }
        k = 0;
        for(auto i:vec){
            if(i.second > k){
                k = i.second;
                now = i.first;
            }
        }
        cout << now << ' ' << k << '\n';
    }
    return 0;
}
