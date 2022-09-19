#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a, vector<int> b){
    if(a == b)return false;
    for(int i=0; i<5; i++){
        if(a[i] != b[i])return a[i] > b[i];
    }
    return false;
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t, k;
    while(cin >> t && t){
        vector<vector<int>> vec;
        vector<int> tmp;
        for(int i=0; i<t; i++){
            for(int j=0; j<5; j++){
                cin >> k;
                tmp.push_back(k);
            }
            sort(tmp.begin(), tmp.end());
            vec.push_back(tmp);
            tmp.clear();
        }
        sort(vec.begin(), vec.end(), cmp);
        // for(int i=0; i<t; i++){
        //     for(int j=0; j<5; j++){
        //         cout << vec[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
        int mx=1, result=0;
        for(int i=0; i<t-1; i++){
            int now = 1;
            if(vec[i] == vec[i+1]){
                while(i<t-1 && vec[i]==vec[i+1]){
                    now += 1;
                    i += 1;
                }
            }
            mx = max(mx, now);
        }
        for(int i=0; i<t; i++){
            int now = 1;
            if(i<t-1 && vec[i] == vec[i+1]){
                while(i<t-1 && vec[i]==vec[i+1]){
                    now += 1;
                    i += 1;
                }
            }
            if(now == mx)result += mx;
        }
        cout << result << '\n';
    }
    return 0;
}
