#include<cstdio>
long long dp[5004];
int main(){
    int n;
    dp[0]=1;
    for(int i=1; i<=5003; i++){
        dp[i]=dp[i-1]*3%10007;
    }

    while(scanf("%d",&n)!=EOF){
        printf("%d\n", dp[n%5003]);
    }
    return 0;
}

// A(n) = 3A(n-1)取10007的餘數，到第幾項會產生一個循環?
