#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    while(cin >> t){
        vector<int> vec;
        for(int i=t; i>=1; i--){
            vec.push_back(i);
        }
        do{
            for(int i=0; i<t; i++){
                cout << vec[i];
            }
            cout << '\n';
        }while(prev_permutation(vec.begin(), vec.end()));
    }
    return 0;
}
