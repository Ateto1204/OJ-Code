#include<iostream>
using namespace std;

int n, p, q, dir, x, y, le, ri, turn;

// 0:up; 1:right; 2:down; 3:left
signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	dir=1;
	while(n--) {
		cin >> p >> q;
		
		// 用當前方向及位置移動前後之變化判斷轉彎狀態
		if(p==x && q!=y) { // y-axis has changed.
			if((dir==1&&q>y) || (dir==3&&q<y)) le++;
			else if((dir==1&&q<y) || (dir==3&&q>y)) ri++;
			else if((dir==0&&q<y) || (dir==2&&q>y)) turn++;
			
			// update the direction.
			if(q>y) dir=0;
			else if(q<y) dir=2;
		}else if(q==y && p!=x) { // x-axis has changed.
			if((dir==0&&p<x) || (dir==2&&p>x)) le++;
			else if((dir==0&&p>x) || (dir==2&&p<x)) ri++;
			else if((dir==1&&p<x) || (dir==3&&p>x)) turn++;
			
			// update the direction.
			if(p>x) dir=1;
			else if(p<x) dir=3;
		}
		
		// update the position.
		x=p, y=q;
	}
	cout << le << ' ' << ri << ' ' << turn << '\n';
	return 0;
}