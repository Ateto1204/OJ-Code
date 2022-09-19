#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a,b;
    while(cin >> a >> b){
        if(b==1 || b==0){
            cout << "Boring!\n";
        }else{
            vector<int> vec;
            vec.push_back(a);
            int result = 1;
            while(a!=1){
                if(a%b==0){
                    a/=b;
                    vec.push_back(a);
                }else{
                    result = 0;
                    break;
                    }
            }
            if(result){
                for(auto i:vec)cout << i << ' ';
                cout << '\n';
            }else cout << "Boring!\n";
        }
    }
    return 0;
}
