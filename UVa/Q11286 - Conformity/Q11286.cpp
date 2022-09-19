#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a, vector<int> b){
    for(int i=0; i<5; i++){
        if(a[i] != b[i]) return a[i] < b[i];
    }
    return false;
}
signed main(){
    // freopen("output.txt", "w", stdout);
    int t;
    while(cin >> t && t){
        int k;
        vector<vector<int>> vec;
        for(int i=0; i<t; i++){
            vector<int> tmp;
            for(int j=0; j<5; j++){
                cin >> k;
                tmp.push_back(k);
            }
            sort(tmp.begin(), tmp.end());
            vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end(), cmp);
        // for(auto i:vec){
        //     for(auto j:i){
        //         cout << j << ' ';
        //     }
        //     cout << '\n';
        // }
        // cout << '\n';
        int cnt=1, mx=0, result=0;
        vector<int> num, now(vec[0]);
        for(int i=1; i<t; i++){
            if(now != vec[i]){
                mx = max(mx, cnt);
                now = vec[i];
                num.push_back(cnt);
                cnt = 0;
            }
            cnt++;
        }
        num.push_back(cnt);
        // for(auto i:num){
        //     cout << i << ' ';
        // }
        // cout << '\n';

        for(int i=0; i<num.size(); i++){
            if(num[i] == mx)result+=mx;
        }
        cout << result << '\n';
    }
    return 0;
}
