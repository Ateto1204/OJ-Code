#include<iostream>
#include<vector>
#include<algorithm>
#define x first
#define y second
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int n, m, le, ri, tmp, flag;
vector<pair<int, int>> vec;

signed main() {
    AC
    cin >> n >> m;
    for(int i=1; i<=n; ++i) {
        cin >> tmp;
        vec.push_back({tmp, i});
    }
    sort(vec.begin(), vec.end());
    le = 0, ri = n-1, flag = true;
    while(ri > le) {
        if(vec[le].x+vec[ri].x > m) {
            ri--;
        }else if(vec[le].x+vec[ri].x < m) {
            le++;
        }else {
            flag = false;
            break;
        }
    }
    
    if(flag) cout << "IMPOSSIBLE\n";
    else {
        int a, b;
        a=vec[le].y, b=vec[ri].y;
        if(a > b) swap(a, b);
        cout << a << ' ' << b << '\n';
    }
    return 0;
}