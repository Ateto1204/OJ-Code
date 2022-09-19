#include<bits/stdc++.h>
using namespace std;
int main(){
    string ss, s;
    int t;
    cin>>ss>>t;
    for(int i=0; i<t; i++){
        cin>>s;
        int a=0,b=0;
        for(int j=0; j<4; j++){
            if(ss[j]==s[j]){
                a++;
                s[j]=-1;
            }
        }
        for(int j=0; j<4; j++){
            if(s[j]!=-1){
                    char tmp=s[j];
                for(int k=0; k<4; k++){
                    if(tmp==ss[k]){
                        b++;
                        break;
                    }
                }
            }
        }
        printf("%dA%dB\n",a,b);
    }
}
