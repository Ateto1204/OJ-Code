#include<bits/stdc++.h>
#define max 10000000
#define AC ios::sync_with_stdio(false), cin.tie(0);
#define ll long long
using namespace std;

ll border[105][105];
ll sum = 0;

void check(int x, int y){ // check direction
    ll up = border[y-1][x], down = border[y+1][x], left = border[y][x-1], right = border[y][x+1];
    if(up==-1)up = max;
    if(down==-1)down = max;
    if(left==-1)left = max;
    if(right==-1)right = max;

    while(border[y][x] != -1){
        sum += border[y][x];
        border[y][x] = -1;

        up = border[y-1][x];
        down = border[y+1][x];
        left = border[y][x-1];
        right = border[y][x+1];

        if(up==-1)up = max;
        if(down==-1)down = max;
        if(left==-1)left = max;
        if(right==-1)right = max;


        if(up<down && up<left && up<right){
            y--;
            // sum += up;
        }
        else if(down<up && down<left && down<right){
            y++;
            // sum += down;
        }
        else if(left<up && left<down && left<right){
            x--;
            // sum += left;
        }
        else{
            x++;
            // sum += right;
        }
    }
    cout << sum << '\n';
}

int main(){

    AC

    for(int i=0; i<105; i++)for(int j=0; j<105; j++)border[i][j] = -1; // setting the border

    int m,n,x,y,begin = max;
    cin >> m >> n;
    for(int i=1; i<=m; i++){ // input and set start spot
        for(int j=1; j<=n; j++){
            cin >> border[i][j];
            if(border[i][j] < begin){
                begin = border[i][j];
                y = i;
                x = j;
            }
        }
    }
    check(x,y);
    return 0;
}
