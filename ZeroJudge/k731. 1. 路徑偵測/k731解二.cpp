#include<iostream>
using namespace std;

// nxt:next; dir:direction; le:left; ri:right
int n, p, q, nxt, dir, x, y, le, ri, turn, first;

// 用移動後的方向與當前方向計算出轉彎之狀態
int sol(int cur, int pre) {
	return (cur-pre+4) % 4;
}

// 0:up; 1:right; 2:down; 3:left
signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	dir=1, first=true;
	cin >> n;
	while(n--) {
		cin >> p >> q;
		
		// 透過xy軸之變化判斷移動後之方向
		if(q > y) nxt = 0;
		else if(p > x) nxt = 1;
		else if(q < y) nxt = 2;
		else nxt = 3;
		
		if(first) first=false;
		else if(sol(nxt, dir)==3) le++;
		else if(sol(nxt, dir)==1) ri++;
		else if(sol(nxt, dir)==2) turn++;
		
		// update the direction and the position.
		dir=nxt, x=p, y=q;
	}
	cout << le << ' ' << ri << ' ' << turn << '\n';
	return 0;
}