#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> vec;
vector<int> tmp;
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        tmp.push_back(a);
        tmp.push_back(b);
        vec.push_back(tmp);
        tmp.clear();
    }
    sort(vec.begin(), vec.end());
    for(auto i:vec){
        cout<<i[0]<<' '<<i[1]<<'\n';
    }
    return 0;
}
