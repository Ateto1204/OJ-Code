#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define N 30005
#define NN 70010
#define all(x) x.begin(), x.end()
#define rall(y) y.rbegin(), y.rend()
#define add push_back
#define fastio ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int n, dir = 1, ans;
vector<int> x[NN], y[NN];
vector<int> rx[NN], ry[NN];
map<pair<int, int>, int> val;

// dir 1 = right, 2 = down, 3 = left, 4 = up
// 1 '/'  2 '\'

void run(int X, int Y) {
	bool flag=true;
  	while(flag) {
  		flag = false;
    	if(dir == 1 || dir == 3) {
      		if(y[Y].size()) {
      			
        		auto it = (dir == 1)
          		? upper_bound(all(y[Y]), X)
          		: upper_bound(all(ry[Y]), X, greater<int>());
          		
          		
        		if(it != y[Y].end() && it != ry[Y].end()) {
          			if(val[{*it, Y}] == 1) {
            			dir = (dir == 1) ? 2 : 4;
          			}else if(val[{*it, Y}] == 0) {
            			dir = (dir == 1) ? 4 : 2;
          			}
          			X = *it;
          			flag = true;
        		}
      		}
    	}else if(dir == 2 || dir == 4) {
      		if(x[X].size()) {
      			
        		auto it = (dir == 2)
          		? upper_bound(all(rx[X]), Y, greater<int>())
          		: upper_bound(all(x[X]), Y);
          		
        		if (it != x[X].end() && it != rx[X].end()) {
          			if (val[{X, *it}] == 1) {
            			dir = (dir == 2) ? 1 : 3;
          			}else if (val[{X, *it}] == 0) {
            			dir = (dir == 2) ? 3 : 1;
          			}
          			Y = *it;
          			flag = true;
        		}
      		}
		}
		++ans;
  	}
}

signed main() {
	fastio
	cin >> n;
	for(int i = 0; i < n; i++) {
    	int a, b, c;
    	cin >> a >> b >> c;
    	a += N, b += N;
    	x[a].add(b);
    	y[b].add(a);
    	rx[a].add(b);
    	ry[b].add(a);
    	val[{a, b}] = c;
  	}
  	for(int i = 0; i < 70000; i++) {
  		sort(all(x[i]));
  		sort(all(y[i]));
  		sort(rall(rx[i]));
  		sort(rall(ry[i]));
  	}
	run(N, N);
  	cout << ans-1 << '\n';
  	return 0;
}