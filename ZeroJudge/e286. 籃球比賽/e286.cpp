#include<cstdio>
int main(){
    int A=0, B=0, a=0, b=0, result=0, tmp;
    for(int i=0; i<4; i++){
        scanf("%d",&tmp);
        A+=tmp;
        a+=tmp;
    }
    for(int i=0; i<4; i++){
        scanf("%d",&tmp);
        B+=tmp;
        b+=tmp;
    }
    printf("%d:%d\n",a,b);
    result = a>b?result+=1:result-=1;
    a=0;b=0;
    for(int i=0; i<4; i++){
        scanf("%d",&tmp);
        A+=tmp;
        a+=tmp;
    }
    for(int i=0; i<4; i++){
        scanf("%d",&tmp);
        B+=tmp;
        b+=tmp;
    }
    printf("%d:%d\n",a,b);
    result = a>b?result+=1:result-=1;
    if(result<0)printf("Lose\n");
    else if(result>0)printf("Win\n");
    else printf("Tie\n");
}
