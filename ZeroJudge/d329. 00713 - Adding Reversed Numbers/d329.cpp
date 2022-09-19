#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin>>t;
    while(t-->0){
        string a,b;
        cin>>a>>b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        while(a[0]=='0'){
            a.erase(0,1);
        }
        while(b[0]=='0'){
            b.erase(0,1);
        }
        string sum=to_string(atoi(a.c_str())+atoi(b.c_str()));
        reverse(sum.begin(), sum.end());
        while(sum[0]=='0'){
            sum.erase(0,1);
        }
        cout<<sum<<'\n';
    }
    return 0;
}
