#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a/10>0 && c/2>0){
            b+=min((a/10), (c/2));
        }
        printf("%d �ӻ氮�A%d �����J�O�A%d �ӳJ�|�C\n",a,b,c);
    }
    return 0;
}
