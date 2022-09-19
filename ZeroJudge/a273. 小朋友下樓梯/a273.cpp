#include<cstdio>
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(b==0){
            if(a==0){
                printf("Ok!\n");
            }else{
                printf("Impossib1e!\n");
            }
            continue;
        }else{
            printf("%s\n", a%b==0?"Ok!":"Impossib1e!");
        }
    }
    return 0;
}
