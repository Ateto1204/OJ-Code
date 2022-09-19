#include <bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
	int n;
	while(cin >> n){
		priority_queue<pair<int, int> > pq;
		while(n--){
			int s, d; cin >> s >> d;
			pq.push({d, s});
		}
		int mx = 0, now = 0;
		while(!pq.empty()){
		    now += pq.top().second;
		    mx = max(mx, pq.top().first + now);
		    pq.pop();
		}
		cout << mx << endl;
	}
    return 0;
}
