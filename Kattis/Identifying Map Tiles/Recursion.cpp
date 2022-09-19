#include<bits/stdc++.h>
using namespace std;
int x=0, y=0;
string str;
void f(int k, int len){
    if(len<0)return ;
    if(str[k] == '1'){
        x += pow(2, len);
    }else if(str[k] == '2'){
        y += pow(2, len);
    }else if(str[k] == '3'){
        x += pow(2, len);
        y += pow(2, len);
    }
    f(k+1, len-1);
}
signed main(){
    cin >> str;
    cout << str.length() << ' ';
    f(0, str.length()-1);
    cout << x << ' ' << y << '\n';
    return 0;
}
