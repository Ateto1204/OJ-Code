#include<bits/stdc++.h>
#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define txt freopen("output.txt", "w", stdout);
using namespace std;
signed main(){
    AC
    string n;
    while(cin >> n){
        map<char, int> mp;
        for(int i=0; i<n.length(); i++){
            if(!(n[i]>='a'&&n[i]<='z' || n[i]>='A'&&n[i]<='Z'))continue;
            if(n[i]>='A' && n[i]<='Z')n[i] += 'a'-'A';
            mp[n[i]]++;
        }
        int flag = 0;
        for(auto i:mp){
            if(i.second%2==1)flag++;
            if(flag>1)break;
        }
        if(flag>1)cout << "no...\n";
        else cout << "yes !\n";
    }
}
