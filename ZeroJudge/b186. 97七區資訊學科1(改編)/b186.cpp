#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a/10>0 && c/2>0){
            b+=min((a/10), (c/2));
        }
        printf("%d 個餅乾，%d 盒巧克力，%d 個蛋糕。\n",a,b,c);
    }
    return 0;
}
