#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t, cnt=1;
    while(cin >> t){
        if(t==0)break;
        int avg=0, result=0;
        int n[t];
        for(int i=0; i<t; i++){
            cin >> n[i];
        }
        for(int i=0; i<t; i++){
            avg += n[i];
        }
        avg /= t;
        for(int i=0; i<t; i++){
            result += abs(n[i] - avg);
        }
        cout << "Set #" << cnt++ << '\n';
        cout << "The minimum number of moves is " << result/2 << ".\n\n";
    }
    return 0;
}
