#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        int sum=0;
        for(int i=1; i<=c; i++){
            if(i%a==0||i%b==0)sum+=i;
        }
        while(sum>26){
            sum-=26;
        }
        sum+=64;
        cout<<(char)sum<<'\n';
    }
    return 0;
}
