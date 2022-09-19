#include<bits/stdc++.h>
#define int long long
using namespace std;
int const N = 100;
int n, m;
string arr[N], s;
int way[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
bool flag;

void solve(int x, int y) {
    string result;
    int a, b;
    for(int i=0; i<8; ++i) {
        a=x, b=y;
        while(a>=0&&b>=0&&a<n&&b<m) {
            result.push_back(arr[a][b]);
            if(result == s) {
                flag = true;
                cout << x+1 << ' ' << y+1 << '\n';
                cout << a+1 << ' ' << b+1 << '\n';
                break;
            }
            a += way[i][0];
            b += way[i][1];
        }
        if(flag) break;
        result.clear();
    }
}

signed main() {
    cin >> n >> m;
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            if(arr[i][j] >= 'A' && arr[i][j] <= 'Z') {
                arr[i][j] += 32;
            }
        }
    }
    cin >> s;
    for(int i=0; i<s.size(); ++i) {
        if(s[i]>='A' && s[i]<='Z') {
            s[i] += 32;
        }
    }
    flag = false;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            if(arr[i][j] == s[0]) {
                solve(i, j);
                if(flag) break;
            }
        }
        if(flag) break;
    }
    if(!flag) cout << "NO\n";
    return 0;
}
