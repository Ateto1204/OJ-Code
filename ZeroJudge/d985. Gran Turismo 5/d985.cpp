#include<cstdio>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1; i<=m; i++){
        printf("Track %d:\n",i);
        int n,a,b,ans,avg=0,tmp;
        scanf("%d",&n,&a,&b);
        tmp=60*a+b;
        avg+=tmp;
        ans=tmp;
        for(int j=1; j<n; j++){
            scanf("%d%d",&a,&b);
            ans=tmp < 60*a+b ? tmp : 60*a+b;
            tmp=a*60+b;
            avg+=60*a+b;
        }
        printf("Best Lap: %d minute(s) %d second(s).\n", ans/60, ans%60);
        printf("Average: %d minute(s) %d second(s).\n\n", avg/n/60, avg/n%60);
    }
}
