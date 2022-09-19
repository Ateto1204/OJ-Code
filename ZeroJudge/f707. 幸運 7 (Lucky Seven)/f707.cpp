#include<bits/stdc++.h>
using namespace std;
int p[10], k;
signed main(){
    while(cin >> p[k]){
        if(p[k] == 0)break;
        k++;
    }
    sort(p, p+k);
    int result = p[0];
    for(int i=1; i<k; i++){
        bool a = (result%7==0), b = (p[i]%7==0);
        if(a && b){
            int c = result%70;
            int d = p[i]%70;
            if(d>c)result = p[i];
        }else if(b){
            result = p[i];
        }else{
            int c = result%77;
            int d = p[i]%77;
            if(d<c)result = p[i];
        }
    }
    cout << result << '\n';
    return 0;
}
