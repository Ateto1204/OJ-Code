#include<iostream>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
#define write freopen("output.txt", "w", stdout);
using namespace std;
int a,b,x;

int bis(int, int, int);
int f(int, int, int);

signed main(){
    // write
    AC
    while(cin >> a >> b >> x){
        cout << bis(0, 1e9, x) << '\n';
    }
}

int bis(int le, int ri, int val){
    int mid, tmp;
    while(ri >= le){
        mid = (ri + le) / 2;
        tmp = f(a, b, mid);
        if(tmp > val){
            ri = mid - 1;
        }else if(tmp <= val){
            le = mid + 1;
        }
    }
    return ri;
}

int f(int a, int b, int n){
    int tmp, d;
    tmp = n, d = 0;
    while(tmp > 0){
        tmp /= 10;
        d += 1;
    }
    return a*n + b*d;
}
