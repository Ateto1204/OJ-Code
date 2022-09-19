#include<iostream>
#include<vector>
#define int long long
#define AC ios::sync_with_stdio(0), cin.tie(0);
using namespace std;
int const N = 1e6+5;
int num[N], le[N], ri[N];
int t, i;
vector<int> vec;
signed main() {
    AC
    cin >> t;
    for(i=0; i<t; ++i) cin >> num[i];
    vec.push_back(0);
    for(i=1; i<t; ++i) {
        while(!vec.empty() && num[i]>num[vec.back()]) {
            le[i] += le[vec.back()] + num[vec.back()];
            vec.pop_back();
        }
        vec.push_back(i);
    }
    vec.clear();
    vec.push_back(t-1);
    for(i=t-2; i>=0; --i) {
        while(!vec.empty() && num[i]>num[vec.back()]) {
            ri[i] += ri[vec.back()] + num[vec.back()];
            vec.pop_back();
        }
        vec.push_back(i);
    }
    for(i=0; i<t; ++i) {
        cout << le[i] + ri[i] << '\n';
    }
    return 0;
}
