#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        for(int i=0; i<pow(2,n); i++){
            string result = bitset<14>(i).to_string();
            for(int i=result.length()-n; i<result.length(); i++)cout<<result[i];
            cout<<'\n';
        }
    }
}
