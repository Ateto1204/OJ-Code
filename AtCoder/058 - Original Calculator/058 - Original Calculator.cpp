#include<iostream>
#define int long long
using namespace std;
int p[100005];
int idx[100005];
signed main(){
    int n,k,i;
    cin >> n >> k;
    int d=0;
    bool repeat = 0;
    for(i=0; i<k; i++){
        p[n]++;
        if(p[n] == 1){
            idx[n] = i;
        }else if(p[n] == 2){
            d = i - idx[n];
            repeat = 1;
            break;
        }
        int sum = 0;
        int tmp = n;
        while(tmp){
            sum += tmp%10;
            tmp /= 10;
        }
        n = (sum + n)%100000;
    }
    if(repeat){
        k -= idx[n];
        k %= d;
        while(k--){
            int tmp = n;
            while(tmp){
                n += tmp%10;
                tmp /= 10;
            }
            n %= 100000;
        }
    }
    cout << n << '\n';
    return 0;
}
