#include<bits/stdc++.h>
using namespace std;
int eval(){
    int val, x, y;
    if(scanf("%d",&val)==1)return val;
    char c;
    scanf("%c",&c);
    if(c=='f'){
        x=eval();
        return 2*x-1;
    }else if(c=='g'){
        x=eval();
        y=eval();
        return x+2*y-3;
    }
}
int main(){
    printf("%d\n",eval());
    return 0;
}
