#include<bits/stdc++.h>
using namespace std;
const string P = "problem";
int main(){
    string s;
    while(getline(cin,s)){
        int result=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 'a' - 'A';
            }
        }
        for(int i=0; i+6 < s.length(); i++){
            result = 0;
            for(int j=0; j<7; j++){
                if(s[i + j] == P[j])result++;
            }
            if(result==7)break;
        }
        if(result==7)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
