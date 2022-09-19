#include<bits/stdc++.h>
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
signed main(){
    // freopen("output.txt", "w", stdout);
    AC
    int t, n;
    vector<int> vec;
    while(cin >> t){
        vec.clear();
        for(int i=0; i<t; i++){
            cin >> n;
            vec.push_back(n);
        }
        sort(vec.begin(), vec.end());
        int mx, mn;
        if(vec.size()%2 == 0){
            mn = vec[vec.size()/2 - 1];
            mx = vec[vec.size()/2];
        }else{
            mn = vec[vec.size()/2];
            mx = vec[vec.size()/2];
        }
        int cnt = 0, output;
        for(int i=0; i<vec.size(); i++){
            if(vec[i]==mn || vec[i]==mx){
                cnt += 1;
            }
        }
        if(vec.size()%2 == 0){
            output = mx-mn + 1;
        }else{
            output = 1;
        }
        cout << mn << ' ' << cnt << ' ' << output << '\n';
    }
    return 0;
}
