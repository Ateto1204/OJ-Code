#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    for(int i=5; i>0; i--){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    cout<<upper_bound(v.begin(), v.end(), 3)-v.begin()<<endl; // �^�Ǥj��val�̤p�Ȫ�index
    return 0;
}
