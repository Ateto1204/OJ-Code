#include<bits/stdc++.h>
#define int long long
using namespace std;
struct P{
    int k,a,b,c;
    int f(){
        return a*5 + b*3 + c*2;
    }
};
bool cmp(P x, P y){
    int m = x.f();
    int n = y.f();
    if(m>n)return true;
    else if(m==n){
        if(x.a > y.a)return true;
        else if(x.a < y.a)return false;
        else if(x.b > y.b)return true;
        else if(x.b < y.b)return false;
        else if(x.c > y.c)return true;
        else if(x.c < y.c)return false;
        else if(x.k < y.k)return true;
    }
    return false;
}
signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int k,a,b,c;
    int t;
    vector<P> vec;
    cin >> t;
    for(int i=0; i<t; i++){
        P tmp;
        cin >> tmp.k >> tmp.a >> tmp.b >> tmp.c;
        vec.emplace_back(tmp);
    }
    sort(vec.begin(), vec.end(), cmp);
    for(int i=0; i<t; i++){
        int avg = vec[i].f();
        cout << vec[i].k << ' ' << avg/10 << (avg%10==5?".5":"") << '\n';
    }
    return 0;
}
