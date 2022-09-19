#include<cstdio>
int a,b,k;
int main(){
    while(scanf("%d%d",&a,&b)!=EOF){
        int h=0;
        printf("%d %d ",a,b);
        if(a>b){
            int tmp=a;
            a=b;
            b=tmp;
        }
        for(int i=a; i<=b; i++){
            k=1;
            int n=i;
            while(n!=1){
                k++;
                if(n%2==0){
                    n/=2;
                }else{
                    n=n*3+1;
                }
            }
            if(k>h)h=k;
        }
        printf("%d\n",h);
    }
    return 0;
}
