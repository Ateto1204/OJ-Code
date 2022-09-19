#include<iostream>
#include<sstream>
using namespace std;
stringstream ss;
string value(string s){
    int sum;
    for(int i=0; i<s.length(); i++){
        int tmp;
        ss.str("");
        ss.clear();
        ss<<s[i];
        ss>>tmp;
        sum+=tmp;
    }
    ss.str("");
    ss.clear();
    ss<<sum;
    string result;
    ss>>result;
    return result;
}
bool check(string s){
    ss.str("");
    ss.clear();
    int n;
    ss<<s;
    ss>>n;
    return n%9==0;
}
int main(){
    string n;
    while(cin>>n){
        if(n!="0"){
            string sum=value(n);
            int count=1;
            cout<<n;
            if(check(sum)){
                while(sum!="9"){
                    count++;
                    sum=value(sum);
                }
                cout<<" is a multiple of 9 and has 9-degree "<<count<<".\n";
            }else cout<<" is not a multiple of 9.\n";

        }else break;
    }
    return 0;
}
