#include<bits/stdc++.h>
using namespace std;
int parseInt(string str){
    int result = 0;
    int i = (str[0]=='-' ? 1:0);
    for(; i<str.length(); i++){
        result *= 10;
        result += str[i]-'0';
    }
    if(str[0] == '-')result *= -1;
    return result;
}
int eval(){
    string s;
    cin >> s;
    if(s == "f"){
        int x = eval();
        return 2*x - 3;
    }else if(s == "g"){
        int x = eval();
        int y = eval();
        return 2*x + y - 7;
    }else if(s == "h"){
        int x = eval();
        int y = eval();
        int z = eval();
        return 3*x - 2*y + z;
    }else{
        return parseInt(s);
    }
}
signed main(){
    cout << eval() << '\n';
    return 0;
}
