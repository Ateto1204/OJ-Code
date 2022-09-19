#include<bits/stdc++.h>
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define print freopen("output.txt", "w", stdout);
using namespace std;
signed main(){
    // print
    AC
    int r, t, n;
    while(cin >> r){
        while(r--){
            cin >> t;
            vector<int> vec;
            for(int i=0; i<t; i++){
                cin >> n;
                vec.push_back(n);
            }
            sort(vec.begin(), vec.end());
            int mid, result = 0;
            if(vec.size()%2 == 0){
                mid = vec[vec.size()/2] + vec[vec.size()/2 - 1];
                mid /= 2;
            }else{
                mid = vec[vec.size()/2];
            }
            for(int i=0; i<vec.size(); i++){
                result += abs(mid - vec[i]);
            }
            cout << result << '\n';
        }
    }
    return 0;
}
