#include <iostream>
using namespace std;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int input[200000], i, tmp, cnt = 0;
    while ( cin >> tmp ) {
        for ( i = cnt - 1; i >= 0 && input[i] > tmp; i--){
            input[i + 1] = input[i];
        }
        input[i + 1] = tmp;
        cnt++;
        if(cnt%2==1){
            cout << input[cnt / 2] << '\n';
        }else{
            cout << (input[cnt/2-1] + input[cnt/2]) / 2 << '\n';
        }
    }
}
