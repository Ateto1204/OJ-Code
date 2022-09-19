#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t, n, i;
    cin >> t;
    while(t--){
        int total = 0, cnt=0;
        cin >> n;
        vector<int> vec(n);
        for(i=0; i<n; i++)cin >> vec[i];
        sort(vec.begin(), vec.end());
        if(n>2){
            for(i=vec.size()-1; i>=0; i--){
                cnt++;
                if(cnt%3==0){
                    cnt = 0;
                    total += vec[i];
                }
            }
            cout << total << '\n';
        }else cout << 0 << '\n';
    }
    return 0;
}
