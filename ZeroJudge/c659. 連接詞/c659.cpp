#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
stringstream ss;
vector<string> vec;
int main(){
    ss.str("");
    ss.clear();
    string str,s,tmp;
    cin>>str;
    cin.ignore();
    getline(cin,s);
    ss<<s;
    while(ss>>tmp)vec.push_back(tmp);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i];
        if(i+1<vec.size())cout<<' '<<str<<' ';
    }
    return 0;
}
