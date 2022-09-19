#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s=b*b-4*a*c;
    if(s>0){
        int x=max((-b+(int)sqrt(s))/(2*a), (-b-(int)sqrt(s))/(2*a));
        int y=min((-b+(int)sqrt(s))/(2*a), (-b-(int)sqrt(s))/(2*a));
        printf("Two different roots x1=%d , x2=%d\n",x,y);
    }else if(s==0){
        printf("Two same roots x=%d\n",-b/(2*a));
    }else{
        printf("No real root\n");
    }
    return 0;
}
