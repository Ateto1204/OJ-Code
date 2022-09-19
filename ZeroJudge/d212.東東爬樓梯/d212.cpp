#include<cstdio>
int main(){
    long long dp[105] = {1,1,2};
    int tmp=2;
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n>tmp){
            for(int i=tmp; i<=n; i++){
                dp[i]=dp[i-1]+dp[i-2];
            }
            tmp=n;
        }
        printf("%lld\n", dp[n]);
    }
}
