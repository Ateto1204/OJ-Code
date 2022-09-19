#include<iostream>
#include<set>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    multiset<int> st;
    int n;
    while(cin >> n){
        if(n == 0)break;
        if(n != -1 && n!= -2)st.insert(n);
        else if(!st.empty()){
            if(n == -1){
                cout << *st.begin() << ' ';
                st.erase(st.begin());
            }
            else{
                auto itr = st.end();
                itr--;
                cout << *itr << ' ';
                st.erase(itr);
            }
        }
    }
}
