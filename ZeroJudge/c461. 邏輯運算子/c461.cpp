#include<cstdio>
int main(){
    int a,b,c;
    bool possible=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0)a=1; if(b>0)b=1; if(c>0)c=1;
    if((a&&b)==c){
        possible=1;
        printf("AND\n");
    }
    if((a||b)==c){
        possible=1;
        printf("OR\n");
    }
    if((a^b)==c){
        possible=1;
        printf("XOR\n");
    }
    if(!possible)printf("IMPOSSIBLE\n");
    return 0;
}
