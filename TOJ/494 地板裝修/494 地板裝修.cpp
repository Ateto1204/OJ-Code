#include<bits/stdc++.h>
using namespace std;
signed main(){
    int a,b;
    cin >> a >> b;
    for(int i=0; i<a; i++){ // a times.
        for(int j=0; j<b; j++){ // b lines each time.
            for(int k=0; k<a; k++){
                for(int l=0; l<b; l++){
                    if(k%2 == i%2)cout << '*';
                    else cout << ' ';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
