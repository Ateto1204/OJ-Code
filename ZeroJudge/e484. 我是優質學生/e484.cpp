#include<cstdio>
int check(int n){
    if(n%2==0||n%3==0){
        if(n==2||n==3)return 1;
        return 0;
    }else{
        for(int i=5; i<n; i+=2){
            if(n%i==0)return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%s\n", check(n)==0?"no":"yes");
    return 0;
}
