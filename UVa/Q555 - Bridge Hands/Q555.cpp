#include<bits/stdc++.h>
using namespace std;
using p = pair<int, int>;
string s="SWNE", x="CDSH", y="23456789TJQKA";
int arr[128], a1[128], a2[128];
void take(int arr[], string s){
    for(int i=0; i<s.length(); i++){
        arr[s[i]] = i;
    }
}
bool cmp(p a, p b){
    if(a.first != b.first)return a1[a.first] < a1[b.first];
    return a2[a.second] < a2[b.second];
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    // freopen("output.txt", "w", stdout);
    take(arr, s);
    take(a1, x);
    take(a2, y);
    char start;
    while(cin >> start && start!='#'){
        string a,b;
        vector<p> vec[4];
        cin >> a >> b;
        a += b;
        int idx = arr[start];
        for(int i=0, j=0; i<a.length(); i+=2, j++){
            vec[(j+idx+1)%4].push_back(make_pair(a[i], a[i+1]));
        }
        for(int i=0; i<4; i++){
            sort(vec[i].begin(), vec[i].end(), cmp);
        }
        for(int i=0; i<4; i++){
            cout << s[i] << ":";
            for(auto j:vec[i]){
                char c1 = j.first;
                char c2 = j.second;
                cout << ' ' << c1 << c2;
            }
            cout << '\n';
        }
    }
    return 0;
}
