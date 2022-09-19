#include<bits/stdc++.h>
using namespace std;
long long p[50010];
long long cut(int left, int right){
    if(right-left<=1)return 0;
    long long len=p[right]-p[left], k=(p[right]+p[left])/2;
    int m=left;
    while(p[m]<k) m++;
    if(p[m-1]-p[left]>=p[right]-p[m]) m--;
    return len + cut(left, m) + cut(m, right);
}
int main(){
    int n;
    scanf("%d",&n);
    p[0]=0;
    scanf("%d",&p[n+1]);
    for(int i=1; i<=n; i++){
        scanf("%lld",&p[i]);
    }
    printf("%lld\n",cut(0,n+1));
}
