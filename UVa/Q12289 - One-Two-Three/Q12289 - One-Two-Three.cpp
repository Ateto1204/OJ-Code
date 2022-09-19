#include<bits/stdc++.h>
using namespace std;
string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
signed main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        for(int i=0; i<10; i++){
            int mis = 0;
            if(n.length() != num[i].length())continue;
            for(int j=0; j<n.length(); j++){
                if(n[j] != num[i][j])mis++;
            }
            if(mis<=1){
                cout << i+1 << '\n';
                break;
            }
        }
    }
    return 0;
}
