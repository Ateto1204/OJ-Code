#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        cout << "Case " << i << ": ";
        int times = 0;
        string n;
        cin >> n;
        char c = n[0];
        for(int j=1; j<n.length(); j++){
            if(n[j]>='0' && n[j]<='9'){
                while(n[j]>='0' && n[j]<='9' && j<n.length()){
                    times *=10;
                    times += n[j]-'0';
                    j++;
                }
                while(times--){
                    cout << c;
                }
                c = n[j];
                times = 0;
            }

        }
        cout << '\n';
    }
}
