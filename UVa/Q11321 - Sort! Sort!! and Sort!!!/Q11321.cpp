#include<bits/stdc++.h>
using namespace std;
int a,b;
bool cmp(int x, int y){
    if(x%b != y%b){
        return x%b < y%b;
    }
    if((x&1) != (y&1)){
        return (x&1) > (y&1);
    }
    if(x&1){
        return x > y;
    }
    return x < y;
}
signed main(){
    // freopen("output.txt", "w", stdout);
    int k;
    while(cin >> a >> b){
        cout << a << ' ' << b << '\n';
        if(a==0 && b==0)break;
        vector<int> vec;
        for(int i=0; i<a; i++){
            cin >> k;
            vec.push_back(k);
        }
        sort(vec.begin(), vec.end(), cmp);
        for(int i=0; i<a; i++){
            cout << vec[i] << '\n';
        }
    }
    return 0;
}
