#include<bits/stdc++.h>
using namespace std;
vector<string> vec;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t, n, cnt;
    string s;
    bool result;
    while(cin >> t){
        while(t--){
            cin >> n;
            vec.clear();
            while(n--){
                cin >> s;
                vec.push_back(s);
            }
            sort(vec.begin(), vec.end());
            result = 1;
            for(int i=0; i<vec.size()-1; i++){
                for(int j=i+1; j<vec.size(); j++){
                    cnt = 0;
                    for(int k=0; k<vec[i].length(); k++){
                        if(vec[i][k] == vec[j][k]){
                            cnt += 1;
                        }
                    }
                    if(cnt == vec[i].length()){
                        result = 0;
                        break;
                    }
                }
            }
            if(result) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
