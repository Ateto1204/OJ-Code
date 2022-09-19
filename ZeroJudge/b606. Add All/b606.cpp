#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
signed main(){
    // freopen("output.txt", "w", stdout);
    int t, k;
    while(cin >> t && t){
        int sum = 0;
        vec.clear();
        for(int i=0; i<t; i++){
            cin >> k;
            vec.push_back(k);
        }
        while(vec.size() > 1){
            sort(vec.begin(), vec.end());
            sum += vec[0] + vec[1];
            vector<int> tmp;
            for(int i=2; i<vec.size(); i++)tmp.push_back(vec[i]);
            tmp.push_back(vec[0] + vec[1]);
            vec = tmp;
        }
        cout << sum << '\n';
    }
    return 0;
}
