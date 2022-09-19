#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    string b;
    while(cin>>a>>b){
        int sum=0,s=0, len=b.length();
        for(int i=0; i<len; i+=1){
            sum+=pow(b[i]-48, len);
            s+=(b[len-1-i]-48)*pow(a,i);
        }
        if(sum==s)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
