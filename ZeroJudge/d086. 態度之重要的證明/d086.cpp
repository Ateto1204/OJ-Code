#include<iostream>
using namespace std;
int main(){
    string n;
    while(cin>>n){
        if(n!="0"){
            int sum=0;
            for(int i=0; i<n.length(); i++){
                if(n[i]<65||(n[i]>90&&n[i]<97)||n[i]>122){
                    sum=-1;
                    break;
                }else{
                    if(n[i]<=90){
                        sum+=n[i]-64;
                    }else sum+=n[i]-96;
                }
            }
            if(sum==-1)cout<<"Fail\n";
            else cout<<sum<<'\n';
        }else break;
    }
    return 0;
}
