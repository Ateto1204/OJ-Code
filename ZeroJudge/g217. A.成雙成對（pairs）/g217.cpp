#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
map<int, int> mp;
signed main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> vec;
        for(int i=0; i<n; i++){
            cin >> k;
            vec.push_back(k);
        }
        int flag = 1;
        for(int i=0; i<n; i++){
            mp[vec[i]]++;
            if(mp[vec[i]] > n/2){
                flag = 0;
                break;
            }
        }
        cout << (flag?"Yes":"No") << '\n';
        vec.clear();
        mp.clear();
    }
    return 0;
}
