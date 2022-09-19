#include<iostream>
#include<map>
using namespace std;
map<string, int> mp;
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t, count=1;
    string n;
    cin >> t;
    while(t--){
        cin >> n;
        if(mp[n] == 0){
            cout << "New! " << count << '\n';
            mp[n] = count++;
        }else{
            cout << "Old! " << mp[n] << '\n';
        }
    }
    return 0;
}
