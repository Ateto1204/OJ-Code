#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int t;
        if(n%2==0){
            n--;
        }
        t=(n-1)/2+1;
        cout<<(n+1)*t/2<<'\n';
    }
    return 0;
}
