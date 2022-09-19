#include<bits/stdc++.h>
using namespace std;
int main(){
    int p[26] = {1,10,19,28,37,46,55,64,39,73,82,2,11,20,48,29,38,47,56,65,74,83,21,3,12,30} ;
    char ans = 'A';
    int sum=0, m, c;
    string n;
    cin>>n;
    for(int i=0; i<8; i++){
        sum+=(8-i)*(n[i]-48);
    }
    for(int i=0; i<26; i++){
        if(10-(sum+p[i])%10==n[8]-48){
            printf("%c",ans+i);
        }
    }
}
