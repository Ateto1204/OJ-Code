#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,m,i,j;
    cin >> n >> m;
    int arr[m];
    for(i=0; i<m; i++)cin >> arr[i];
    for(i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==2)arr[b] = c;
        else if(a==1){
            int mn = 100005;
            for(j=b; j<=c; j++){
                mn = min(arr[j], mn);
            }
            cout << mn << '\n';
        }
    }
    return 0;
}
