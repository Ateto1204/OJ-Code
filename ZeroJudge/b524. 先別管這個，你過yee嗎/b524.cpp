#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int len = s.length();
        string ss="";
        int k=0;
        for(int i=0; i<len/3; i++){
            ss+="yee";
        }
        for(int i=0; i<len-1; i++){
            if(s[i]!=ss[i]){
                char tmp=s[i];
                s[i]=s[i+1];
                s[i+1]=tmp;
                k++;
                i++;
            }
        }
        for(int i=len-1; i>0; i--){
            if(s[i]!=ss[i]){
                char tmp=s[i];
                s[i]=s[i-1];
                s[i-1]=tmp;
                k++;
                i--;
            }
        }
        cout<<s<<": "<<k<<endl;
    }
}
