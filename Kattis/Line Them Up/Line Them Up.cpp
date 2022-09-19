#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    string n[t];
    for(int i=0; i<t; i++){
        cin >> n[i];
    }
    int i=0;
    while(n[i] == n[i+1])i++;
    bool condition = (n[i+1] > n[i]), result = 1;
    while(i<t-1){
        while(n[i] == n[i+1]){
            i++;
            if(i==t-2)break;
        }
        if(condition != (n[i+1] > n[i])){
            result = 0;
            break;
        }
        i++;
    }
    if(!result)cout << "NEITHER\n";
    else if(condition)cout << "INCREASING\n";
    else cout << "DECREASING\n";
    return 0;
}
