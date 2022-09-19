#include<iostream>
#include<sstream>
using namespace std;
stringstream ss;
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    while(cin>>t){
        ss.str("");
        ss.clear();
        string n;
        cin>>n;
        char c=n[0];
        int count=1;
        for(int i=1; i<=t; i++){
            if(n[i]==c){
                count++;
            }else{
                ss<<count;
                ss<<c;
                c=n[i];
                count=1;
            }
        }
        string str;
        ss>>str;
        if(str.length()>=n.length())cout<<n<<'\n';
        else cout<<str<<'\n';
    }
    return 0;
}
