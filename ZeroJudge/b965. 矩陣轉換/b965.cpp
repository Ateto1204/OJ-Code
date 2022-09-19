#include<iostream>
#include<vector>

#define AC cin.sync_with_stdio(false), cin.tie(nullptr);

using namespace std;

void print(vector<vector<int>> vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            cout << vec[i][j];
            if(j+1<vec[i].size())cout << ' ';
        }
        cout << '\n';
    }
}
int main(){
    AC
    int a,b,c,tmp;
    while(cin >> a >> b >> c){
        vector<vector<int>> result;
        vector<vector<int>> outside;
        vector<int> inside;
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cin >> tmp;
                inside.push_back(tmp);
            }
            outside.push_back(inside);
            inside.clear();
        }
        int doing[c];
        for(int i=0; i<c; i++)cin >> doing[i];
        while(c--){
            if(doing[c]==0){
                //int t = outside[0].size();
                for(int i=outside[0].size()-1; i>=0; i--){
                    for(int j=0; j<outside.size(); j++){
                        inside.push_back(outside[j][i]);
                    }
                    result.push_back(inside);
                    inside.clear();
                }
                outside.clear();
                outside = result;
                result.clear();
            }else{
                int t = outside.size();
                for(int i=t-1; i>=0; i--){
                    for(int j=0; j<outside[i].size(); j++){
                        inside.push_back(outside[i][j]);
                    }
                    result.push_back(inside);
                    inside.clear();
                }
                outside.clear();
                outside = result;
                result.clear();
            }
        }
        cout << outside.size() << ' ' << outside[0].size() << '\n';
        print(outside);
    }
    return 0;
}
