#include<iostream>
#include<algorithm>
using namespace std;
#define int long long
int a[100005];
signed main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    long long ans=0;
    for(int i=n;i>=1;i--)
    {
        int num = n-i+1;
        int cost = num*(a[i]-a[i-1]);
        if(cost<=k)
        {
            k-=cost;
            ans+=num * (a[i]+a[i-1]+1) * (a[i]-a[i-1]) / 2;
        }
        else
        {
            int t1 = k/num;
            int t2 = k%num;
            ans += num * (a[i] + a[i]-t1+1) * t1 / 2;
            ans += (a[i]-t1)*t2;
            break;
        }
    }
    printf("%lld\n",ans);
}
