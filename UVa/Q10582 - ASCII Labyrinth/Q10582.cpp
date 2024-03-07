#include<iostream>
#include<cstring>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define N 65
#define M 4
using namespace std;

int g[N][N], used[N][N], t, n, m, ans;
string s[M], tmp;

// way: 0 up-down, 1 left-right
void dfs(int x, int y, int way) {
    if(x==n-1 && y==m-1) {
        ans++;
        return ;
    }
    used[x][y] = 1;
    if(way == 0) {
        if(x-1>=0 && !used[x-1][y] && g[x-1][y]!=0) {
        	if(g[x-1][y] == 1) dfs(x-1, y, 0);
        	else dfs(x-1, y, 1);
        }
        if(x+1<n && !used[x+1][y] && g[x+1][y]!=0) {
        	if(g[x+1][y] == 1) dfs(x+1, y, 0);
        	else dfs(x+1, y, 1);
        }
    }else {
        if(y-1>=0 && !used[x][y-1] && g[x][y-1]!=0) {
        	if(g[x][y-1] == 1) dfs(x, y-1, 1);
        	else dfs(x, y-1, 0);
        }
        if(y+1<m && !used[x][y+1] && g[x][y+1]!=0) {
        	if(g[x][y+1] == 1) dfs(x, y+1, 1);
        	else dfs(x, y+1, 0);
        }
        
    }
    used[x][y] = 0;
}

signed main() {
	fastio
    cin >> t;
    while(t--) {
    	cin >> n >> m;
    	cin.ignore();
    	getline(cin, tmp);
    	for(int i=0; i<n; i++) {
    		for(int j=0; j<M; j++) {
    			getline(cin, s[j]);
    		}
    		for(int j=0, k=1; j<m; j++, k+=M) {
    			if(s[1][k] == ' ') g[i][j] = 0;
    			else if(s[1][k+2] == '*') g[i][j] = 1;
    			else g[i][j] = 2;
    		}
    	}
    	ans = 0;
    	dfs(0, 0, 0);
    	dfs(0, 0, 1);
    	cout << "Number of solutions: " << ans << '\n';
    }
}