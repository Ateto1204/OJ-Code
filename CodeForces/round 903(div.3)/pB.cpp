#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
int t, tmp, k;

bool check() {
    for(int i=0; i<vec.size()-1; i++) {
        if( vec[i] != vec[i+1] ) return false;
    }
    return true;
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> t;
    while( t-- ) {
        for(int i=0; i<3; i++) {
            cin >> tmp;
            vec.push_back(tmp);
        }
        k = 0;
        while( !check() && k < 3) {
            sort(vec.begin(), vec.end());
            tmp = vec[vec.size()-1];
            vec.push_back(vec[0]);
            vec[vec.size()-2] = tmp - vec[0];
            k++;
        }
        if( k < 3 || check() ) cout << "YES\n";
        else cout << "NO\n";
//        for(int i=0; i<vec.size(); i++) {
//            cout << vec[i] << ' ' ;
//        }
//        cout << '\n';
        vec.clear();
    }
}
