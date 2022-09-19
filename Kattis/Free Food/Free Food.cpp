#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    vector<pair<int, int>> vec;
    for(int i=0; i<t; i++){
        int a,b;
        cin >> a >> b;
        vec.push_back({a,b});
    }
    sort(vec.begin(), vec.end());
    int le = vec[0].first, ri = vec[0].second, sum=0;
    for(int i=1; i<t; i++){
        if(vec[i].first > ri){
                sum += ri-le+1;
                le = vec[i].first;
                ri = vec[i].second;
        }
        ri = max(ri, vec[i].second);
    }
    sum += ri-le+1;
    cout << sum << '\n';
    return 0;
}
