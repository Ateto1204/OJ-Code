
// 線段覆蓋長度

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t,a,b;
    cin >> t;
    unordered_set<int> unst;
    while(t--){
        cin >> a >> b;
        for(int i=a; i<b; i++){
            unst.insert(i);
        }
    }
    cout << unst.size();
    return 0;
}
