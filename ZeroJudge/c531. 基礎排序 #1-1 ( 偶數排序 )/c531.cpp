#include<bits/stdc++.h>
using namespace std;
vector<int> split(string s){
    vector<int> vec;
    int num=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            while(i<s.length() && s[i]>='0'&&s[i]<='9'){
                num *= 10;
                num += s[i]-'0';
                i += 1;
            }
            vec.push_back(num);
            num = 0;
        }
    }
    return vec;
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    while(cin >> s){
        vector<int> vec(split(s));
        for(int i=0; i<vec.size()-1; i++){
            while(i<vec.size()-1 && vec[i]%2==1)i++;
            if(i >= vec.size()-1)break;
            for(int j=i+1; j<vec.size(); j++){
                while(j<vec.size() && vec[j]%2==1)j++;
                if(j >= vec.size())break;
                if(vec[i] > vec[j]){
                    swap(vec[i], vec[j]);
                }
            }
        }
        for(int i=0; i<vec.size(); i++){
            cout << vec[i];
            if(i+1 < vec.size())cout << ',';
            else cout << '\n';
        }
    }
    return 0;
}
