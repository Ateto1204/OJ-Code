#include<bits/stdc++.h>
using namespace std;
vector<int> card(vector<int> v){
    int mid = v.size()/2;
    vector<int> result;
    for(int i=0; i<mid; i++){
        result.push_back(v[i]);
        result.push_back(v[mid+i]);
    }
    return result;
}
signed main(){
    int n,t;
    cin >> n >> t;
    vector<int> vec(n);
    for(int i=0; i<n; i++)cin >> vec[i];
    while(t--){
        vec = card(vec);
    }
    for(auto i: vec){
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}
