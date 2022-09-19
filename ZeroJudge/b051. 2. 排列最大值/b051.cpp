#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> vec;
bool cmp(string a,string b){
    return a+b>b+a;
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    while(cin>>t){
        while(t--){
            string tmp;
            cin>>tmp;
            vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end(), cmp);
        for(string i:vec)cout<<i;
        cout<<'\n';
        vec.clear();
    }
    return 0;
}
