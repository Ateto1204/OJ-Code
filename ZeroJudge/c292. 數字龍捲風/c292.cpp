#include<bits/stdc++.h>
using namespace std;

int turn(int n){
    if(n==3)return 0;
    else return n+1;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t,dic;
    cin >> t >> dic;
    int border[t][t];
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            cin >> border[i][j];
        }
    }

    int x=t/2, y=t/2, count=1;
    const int X=x, Y=y;
    cout << border[y][x];
    for(int i=1; i<(t+1)/2; i++){
        for(int j=0; j<i*8; j++){

            if(dic == 0){
                if(x-1<X-i || x==0) dic = turn(dic);
            }else if(dic == 1){
                if(y-1<Y-i || y==0) dic = turn(dic);
            }else if(dic == 2){
                if(x+1>X+i || x==t-1) dic = turn(dic);
            }else{
                if(y+1>Y+i || y==t-1) dic = turn(dic);
            }

            if(dic == 0)x--;
            else if(dic == 1)y--;
            else if(dic == 2)x++;
            else if(y+1<=Y+i)y++;

            cout << border[y][x];
        }
    }
    cout << '\n';
    return 0;
}
