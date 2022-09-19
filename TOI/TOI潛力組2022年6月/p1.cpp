#include<bits/stdc++.h>
using namespace std;
int const N = 1e6;
int arr[N], n;
signed main() {
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; ++i) {
        if(arr[i] >= n-i) {
            cout << n-i << '\n';
            break;
        }
    }
    return 0;
}
