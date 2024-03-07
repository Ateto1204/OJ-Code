#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0);
#define pii pair<int, int>
#define int long long
using namespace std;

vector<int> vec;
int t, n, p;
bool flag;

signed main() {
    cin >> t;
    while(t--) {
        cin >> n;
        p = 1;
        vec.clear();
        for(int i=0; i<n/3; i++) {
            flag = true;
            for(int j=p; j<=p+30&&flag; j++) {
                for(int k=j+1; k<=j+30&&flag; k++) {
                    if((j+k)%3 != 0) {
                        for(int l=k+1; l<=k+30&&flag; l++) {
                            if(l*3 % (j+k) != 0) {
                                vec.push_back(j);
                                vec.push_back(k);
                                vec.push_back(l);
                                flag = false;
                            }
                        }
                    }
                }
            }
            p = vec[vec.size()-1]+1;
        }
        for(int i=0; i<n%3; i++) {
            vec.push_back(vec[vec.size()-1]+1);
        }
        for(int i=0; i<n; i++) {
            cout << vec[i];
            if(i+1 < n) cout << ' ';
        }
        cout << '\n';
    }
}
