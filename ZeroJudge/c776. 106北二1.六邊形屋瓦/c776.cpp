#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        int sum=0;
        sum+=a*(b+1)*2+(1+a*2)*b-a*b;
        cout<<sum<<'\n';
    }
    return 0;
}
