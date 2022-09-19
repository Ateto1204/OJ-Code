#include<bits/stdc++.h>
using namespace std;
int S[1005], T[1005];
signed main(){
    int n,m,k;
    cin >> n >> m;
    for(int i=1; i<=n; i++)cin >> S[i];
    for(int i=1; i<=n; i++)cin >> T[i];
    queue<int> q;
    for(int i=1; i<=n; i++){
        cin >> k;
        q.push(k);
    }
    while(!q.size() > 1){
        queue<int> Q;
        int a = q.front();
        q.pop();
        int b = q.front();
        q.pop();
        int x = S[a]*T[a];
        int y = S[b]*T[b];
        cout << x << ' ' << y << '\n';
        if(x >= y){
            S[a] = S[a] + y/T[a]/2;
            T[a] = T[a] + y/S[a]/2;
            Q.push(a);
        }else{
            S[b] = S[b] + x/T[b]/2;
            T[b] = T[b] + x/S[b]/2;
            Q.push(b);
        }
        while(!q.empty()){
            Q.push(q.front());
            q.pop();
        }
        while(!Q.empty()){
            q.push(Q.front());
            Q.pop();
        }
    }
    cout << q.front() << '\n';
    return 0;
}
