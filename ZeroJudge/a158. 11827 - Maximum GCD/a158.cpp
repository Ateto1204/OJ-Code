#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
stringstream ss;
vector<int> vec;
int value(int a,int b){
    while(a!=0 && b!=0){
        if(a >= b)a %= b;
        else b %= a;
    }
    return a>=b?a:b;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string num;
        getline(cin,num);
        vec.clear();
        ss.str("");
        ss.clear();
        ss<<num;
        int tmp;
        while(ss>>tmp){
            vec.push_back(tmp);
        }
        int result=0;
        for(int i=0; i<vec.size()-1; i++){
            for(int j=i+1; j<vec.size(); j++){
                int n=value(vec[i], vec[j]);
                if(n>result)result=n;
            }
        }
        cout<<result<<'\n';
    }
}
