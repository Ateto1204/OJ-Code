#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3], b[3], ii=0;
    for(int i=0; i<3; i++){
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]<a[ii]){
            ii=i;
        }
    }
    if(ii>0){
        int tmp=a[ii];
        a[ii]=a[0];
        a[0]=tmp;
        tmp=b[ii];
        b[ii]=b[0];
        b[0]=tmp;
    }
    int ans=a[0]+b[0];
    while(ans%a[1]!=b[1]||ans%a[2]!=b[2]){
        ans+=a[0];
    }
    printf("%d\n",ans);
}
