#include<iostream>
using namespace std;
int main(){
    unsigned int a,b,c;
    while(cin >> a >> b >> c){
        char ans;
        if(a<=b && b<=c){
            b+=a;
            ans = b>c ? 'B':'C';
        }
        else if(a<=c && c<=b){
            c+=a;
            ans = b>c ? 'B':'C';
        }
        else if(b<=a && a<=c){
            a+=b;
            ans = a>c ? 'A':'C';
        }
        else if(b<=c && c<=a){
            c+=b;
            ans = a>c ? 'A':'C';
        }
        else if(c<=a && a<=b){
            a+=c;
            ans = a>b ? 'A':'B';
        }
        else{
            b+=c;
            ans = a>b ? 'A':'B';
        }
        cout << ans << endl;
    }
}
