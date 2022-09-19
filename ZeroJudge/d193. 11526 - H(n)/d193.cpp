#include<cstdio>
#define int long long
signed main(){
    int t, n;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        if(n <= 0)printf("0\n");
        else{
            int result = n;
            for(int i=2; i<=n; i++){
                int k = n/i;
                int ni = n/k;
                result += k*(ni - i + 1);
                i = ni;
            }
            printf("%lld\n", result);
        }
    }
    return 0;
}
