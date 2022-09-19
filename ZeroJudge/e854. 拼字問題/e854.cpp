#include<iostream>
#include<sstream>
#include<vector>
#include<map>
#define AC cin.sync_with_stdio(false), cin.tie(nullptr);
using namespace std;
stringstream ss;
vector<string> vec,result;
vector<char> str;
int main(){

    AC

    ss.str(""); ss.clear();
    map<char, int> mp,buffer;
    string text, test, tmp;
    getline(cin, text);
    ss << text;
    while(ss >> tmp){
        vec.push_back(tmp);
    }
    cin >> test;
    for(int i=0; i<test.length(); i++){
        mp[test[i]]++;
    }
    for(int i=0; i<vec.size(); i++){
        bool isCorrect = 1;
        for(int j=0; i<vec[i].length(); j++){
            if(mp[vec[i][j]] > 0){
                str.push_back(vec[i][j]);
                mp[vec[i][j]]--;
            }else break;
        }
        string buffer = "";
        for(auto j:str)buffer += j;
        if(buffer!="")result.push_back(buffer);
        if(buffer.length() != vec[i].length())break;
        str.clear();
    }
    for(int i=0; i<result.size(); i++){
        cout << result[i];
        if(i+1<result.size())cout << ' ';
    }
    return 0;
}
