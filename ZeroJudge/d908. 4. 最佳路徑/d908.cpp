#include<bits/stdc++.h>
using namespace std;

map<char, vector< pair<char, int> >> mp; // map 夾 vector 再夾 pair

int DFS(char start, int total){
    if(!mp.count(start))return total; // 若無 node 則回傳路徑總和
    int maxi = 0;
    for(auto i:mp[start]){

    }
    return maxi;
}

int main(){
    char start;
    int t;
    while(cin >> start >> t){
        mp.clear();
        for(int i=0; i<t; i++){
            char begin, end;
            int num;
            cin >> begin >> end >> num;
            mp[begin].push_back({end, num});
        }
        cout << DFS(start, 0) << '\n';
    }
    return 0;
}
