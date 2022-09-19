#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t, count=0;
    cin >> t;
    vector<int> vec;
    for(int i=0; i<t; i++){
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    map<int, int> mp;
    for(int i=0; i<t; i++)mp[i] = 0;
    for(int i=0; i<t; i++){
        int j=i;
        if(vec[vec[j]] == vec[j]){
            mp[j]++;
            count++;
        }else if(mp[j] == 0){
            mp[j]++;
            if(mp[vec[j]] == 0){
                do{
                    mp[vec[j]]++;
                    j = vec[j];
                }while(mp[vec[j]] == 0);
                count++;
            }
        }
    }
    cout << count << '\n';
    return 0;
}
