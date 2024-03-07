#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define int long long
using namespace std;

vector<int> vec;
int T, n, temp;
long double x, y, tmp;

signed main() {
    fastio
    cin >> T;
    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";
        cin >> n;
        for(int i=0; i<n; i++) {
        	cin >> temp;
            vec.push_back(temp);
        }
        sort(vec.begin(), vec.end());
        if(n != 5) {
            x = (long double)(vec[0]+vec[1]) / 2.0;
            y = (long double)(vec[vec.size()-1]+vec[vec.size()-2]) / 2.0;
            cout << fixed << setprecision(7) << y-x << '\n';
        }else {
            x = (long double)(vec[0]+vec[2]) / 2.0;
            y = (long double)(vec[3]+vec[4]) / 2.0;
            tmp = y-x;
            x = (long double)(vec[0]+vec[1]) / 2.0;
            y = (long double)(vec[2]+vec[4]) / 2.0;
            cout << fixed << setprecision(7) << max(tmp, y-x) << '\n';
        }
        vec.clear();
    }
}
