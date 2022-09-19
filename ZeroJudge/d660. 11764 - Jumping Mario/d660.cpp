#include<cstdio>
int main(){
    int m,n;
    scanf("%d",&m);
    for(int i=1; i<=m; i++){
        int high=0,low=0,a,b;
        scanf("%d%d",&n,&a);
        for(int j=1; j<n; j++){
            scanf("%d",&b);
            if(a>b)low++;
            else if(a<b)high++;
            a=b;
        }
        printf("Case %d: %d %d\n", i, high, low);
    }
}
