#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    while(cin >> t){
        int n[t];
        for(int i=0; i<t; i++)cin >> n[i];
        int idx = 0;
        for(int i=0; i<t; i++){
            if(i%2==0){
                for(int k=0; k<t-i; k++){
                    cout << n[idx] << ' ';
                    idx++;
                }
                idx--;
            }else{
                for(int k=0; k<t-i; k++){
                    cout << n[idx] << ' ';
                    idx--;
                }
                idx++;
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}
