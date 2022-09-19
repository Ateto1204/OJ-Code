#include<bits/stdc++.h>
using namespace std;
signed main(){
    // freopen("output.txt", "w", stdout);
    vector<int> vec;
    int t, n, k;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> n;
        vec.clear();
        for(int j=0; j<n; j++){
            cin >> k;
            vec.push_back(k);
        }
        sort(vec.begin(), vec.end());
        for(int j=0; j<vec.size(); j+=2){
            if(vec[j] != vec[j+1]){
                cout << "Case #" << i << ": " << vec[j] << '\n';
                break;
            }
        }
    }
    return 0;
}
