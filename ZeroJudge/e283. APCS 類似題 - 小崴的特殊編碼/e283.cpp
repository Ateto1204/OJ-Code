#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    string n;
    while(cin>>t){
        cin.ignore();
        while(t--){
            getline(cin,n);
            if(n=="0 1 0 1")cout<<'A';
            else if(n=="0 1 1 1")cout<<'B';
            else if(n=="0 0 1 0")cout<<'C';
            else if(n=="1 1 0 1")cout<<'D';
            else if(n=="1 0 0 0")cout<<'E';
            else if(n=="1 1 0 0")cout<<'F';
        }
        cout<<'\n';
    }
    return 0;
}
