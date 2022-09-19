#include<bits/stdc++.h>
using namespace std;
signed main(){
    int p[3][2], i, k;
    for(i=0; i<3; i++){
        cin >> p[i][0] >> p[i][1];
    }
    for(k=0; k<2; k++){
        int a=p[0][k], b, cnt=1;
        for(i=1; i<3; i++){
            if(p[i][k] == a)cnt++;
            else b = p[i][k];
        }
        cout << (cnt==2?b:a);
        if(k==0)cout << ' ';
        else cout << '\n';
    }
    return 0;
}
