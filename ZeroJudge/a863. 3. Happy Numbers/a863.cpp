#include<bits/stdc++.h>
using namespace std;
int sum(string n){
    int sum=0;
    for(int i=0; i<n.length(); i++){
        sum+= (n[i]-48)*(n[i]-48);
    }
    return sum;
}
int main(){
    string n;
    while(cin>>n){
        int m = stoi(n), i=0;
        bool isContinue=1;
        int set[1000];
        while(isContinue){
            int k=sum(n);
            if(i>0){
                for(int j=0; i<i; j++){
                    if(k==set[j]){
                        cout<<m<<" is an unhappy number\n";
                        break;
                    }
                }
            }
            if(k==1){
                isContinue=0;
                cout<<m<<" is a happy number\n";
                break;
            }else{
                set[i] = k;
                n = to_string(k);
            }
            i++;
        }
    }
    return 0;
}
