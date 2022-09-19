#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;
vector<int> ans;
int main(){
    int n,m,sum=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int max=0;
        for(int j=0; j<m; j++){
            int tmp;
            cin>>tmp;
            if(tmp>max)max=tmp;
        }
        sum+=max;
        vec.push_back(max);
    }
    cout<<sum<<'\n';
    bool isEmpty=1;
    for(int i=0; i<vec.size(); i++){
        if(sum%vec[i]==0){
            isEmpty=0;
            ans.push_back(vec[i]);
        }
    }
    if(isEmpty)cout<<-1;
    else for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
        if((i+1)<ans.size())cout<<' ';
    }
    return 0;
}
