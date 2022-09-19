#include<iostream>
using namespace std;
int main(){
    int n;
    string s="14159265358979323846";
    while(cin>>n){
        cout<<s[n-1]<<'\n';
    }
    return 0;
}
