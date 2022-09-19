#include<iostream>
#include<deque>
#include<map>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    deque<string> dq;
    map<string, int> mp;
    int m,n,count=0,result=0;
    string tmp;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        cin >> tmp;
        dq.push_back(tmp);
        if(mp[tmp] == 0)count++;
        mp[tmp]++;
    }
    if(count == m)result++;
    for(int i=0; i<n-m; i++){
        if(--mp[dq.front()]==0)count--;
        dq.pop_front();
        cin >> tmp;
        if(mp[tmp] == 0)count++;
        mp[tmp]++;
        dq.push_back(tmp);
        if(count == m)result++;
    }
    cout << result << '\n';
    return 0;
}
