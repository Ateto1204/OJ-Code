#include<bits/stdc++.h>
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
vector<string> split(){
    string input, str="";
    getline(cin, input);
    vector<string> vec;

    for(int i=0; i<input.length(); i++){
        if(input[i]>='0'&&input[i]<='9'){
            while(i<input.length()&&input[i]>='0'&&input[i]<='9'){
                str += input[i];
                i += 1;
            }
            vec.push_back(str);
            str = "";
        }
    }
    return vec;
}
signed main(){
    AC
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        vector<string> x(split()), y(split());
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int cnt = 0;
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(x[i] == y[j]){
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
