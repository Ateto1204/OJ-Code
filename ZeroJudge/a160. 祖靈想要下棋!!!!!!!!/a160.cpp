#include<iostream>
#define N 12
#define NN 24
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

bool output[N][N], x[N], y[N], xx[NN], yy[NN];
int n, cnt;

void dfs(int start, int depth, int level) {
	if(depth == level) {
		++cnt;
		for(int i=0; i<level; ++i) {
			for(int j=0; j<level; ++j) {
				if(output[i][j]) cout << 'Q';
				else cout << 'x';
			}
			cout << '\n';
		}
		cout << '\n';
		return ;
	}
	for(int i=start; i<level*level; ++i) {
		int row, col;
		row=i/n, col=i%n;
		if(!x[row] && !y[col] && !xx[row+col] && !yy[n+row-col]) {
			x[row] = y[col] = xx[row+col] = yy[n+row-col] = true;
			output[row][col] = true;
			dfs(i, depth+1, level);
			x[row] = y[col] = xx[row+col] = yy[n+row-col] = false;
			output[row][col] = false;
		}
	}
}

void solve() {
	while(cin>>n && n) {
		cnt = 0;
		dfs(0, 0, n);
		cout << cnt << "\n\n";
	}
}

signed main() {
	fastio
	solve();
	return 0;
}