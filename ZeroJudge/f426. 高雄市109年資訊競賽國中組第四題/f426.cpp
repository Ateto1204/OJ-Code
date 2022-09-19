#include<iostream>
using namespace std;
int main(){
    int a,b;
    bool isPrime=1;
    while(cin>>a>>b){
        int count=0, sum=0;
        if(a==1)a++;
        for(int i=a; i<=b; i++){
            for(int j=2; j<i; j++){
                if(i%j==0){
                    isPrime=0;
                    break;
                }
            }
            if(isPrime){
                count++;
                sum+=i;
            }
            isPrime=1;
        }
        cout<<count<<'\n'<<sum<<'\n';
    }
    return 0;
}
