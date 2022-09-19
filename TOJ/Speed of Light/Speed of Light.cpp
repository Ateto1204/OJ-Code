#include<iostream>
using namespace std;
long long n = 299792458LL;
string u[] = {"second(LS)", "minute(LM)", "hour(LH)", "day(LD)", "week(LW)", "year(LY)"};;
int t[] = {1, 60, 60, 24, 7, 365};
signed main(){
    int i = 0;
    while(i<6){
        n *= t[i];
        cout << "1 Light-" << u[i] << " is " << n << " metres.\n";
        i++;
        if(i==5) n /= 7; // 一年不是 365 周
    }
    return 0;
}
