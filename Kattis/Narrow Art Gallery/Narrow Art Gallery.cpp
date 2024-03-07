#include<iostream>
#include<algorithm>
#define N 205
using namespace std;

int arr[N][2], dp[N][3][N], n, k;

int solve() {
    dp[0][0][0] = arr[0][0] + arr[0][1];
    dp[0][1][1] = arr[0][1];
    dp[0][2][1] = arr[0][0];
    
    for(int i=1; i<n; ++i) {
        for(int j=0; j<=k; ++j) {
            
            if(j <= i)
            	dp[i][0][j] = max({dp[i-1][0][j], dp[i-1][1][j], dp[i-1][2][j]})+arr[i][0]+arr[i][1];
            
            if(j) {
                dp[i][1][j] = max(dp[i-1][0][j-1], dp[i-1][1][j-1])+arr[i][1];
                dp[i][2][j] = max(dp[i-1][0][j-1], dp[i-1][2][j-1])+arr[i][0];
            }
        }
    }
    return max({dp[n-1][0][k], dp[n-1][1][k], dp[n-1][2][k]});
}

signed main() {
    while(cin>>n>>k && n||k) {
        for(int i=0; i<n; ++i) {
            cin >> arr[i][0] >> arr[i][1];
        }
        cout << solve() << '\n';
    }
    return 0;
}