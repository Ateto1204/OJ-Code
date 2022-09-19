#include<bits/stdc++.h>
using namespace std;
map<char, int> mp;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    while(getline(cin, s)){
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' ')continue;
            if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')mp[s[i]]++;
        }
        int mx = 0;
        for(auto i:mp)mx = max(mx, i.second);
        vector<char> vec;
        for(auto i:mp){
            if(i.second == mx)vec.push_back(i.first);
        }
        sort(vec.begin(), vec.end());
        for(auto i:vec)cout << i;
        cout << ' ' << mx << '\n';
        mp.clear();
    }
    return 0;
}
