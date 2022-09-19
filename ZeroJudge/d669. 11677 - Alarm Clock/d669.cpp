#include<cstdio>
int main(){
    int a,aa,b,bb;
    while(scanf("%d%d%d%d",&a,&aa,&b,&bb)!=EOF){
        if(a+aa+b+bb!=0){
            int ta=a*60+aa, tb=b*60+bb;
            if(ta>tb){
                tb+=1440;
            }
            printf("%d\n", ta-tb);
        }else break;
    }
}
