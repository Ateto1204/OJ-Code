#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        int result = 2e9;
        string n,m,k[3];
        cin >> n >> m >> k[0] >> k[1] >> k[2];
        for(int i=0; i<3; i++){
            int idx = 0, sum = 0;
            while(n[idx] == k[i][idx] && idx < k[i].length())idx++;
            sum += k[i].length() - idx;
            sum += n.length() - idx;
            result = min(result, sum+1);
            idx = 0;
        }
        int idx = 0;
        while(m[idx] == n[idx] && idx < n.length())idx++;
        int sum = n.length() - idx;
        sum += m.length() - idx;
        result = min(result, sum);
        cout << result << '\n';
    }
    return 0;
}
