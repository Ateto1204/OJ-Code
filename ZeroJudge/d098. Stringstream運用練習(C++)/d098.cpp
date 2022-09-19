#include<iostream>
#include<sstream>
using namespace std;
stringstream ss;
stringstream num;
int value(string s){
    num.str("");
    num.clear();
    for(int i=0; i<s.length(); i++) if(s[i]<48 || s[i]>57) return 0;
    int result;
    num<<s;
    num>>result;
    return result;
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    string str;
    while(getline(cin,str)){
        int sum=0;
        ss.str("");
        ss.clear();
        ss<<str;
        string tmp;
        while(ss>>tmp){
            sum+=value(tmp);
        }
        cout<<sum<<'\n';
    }
    return 0;
}
