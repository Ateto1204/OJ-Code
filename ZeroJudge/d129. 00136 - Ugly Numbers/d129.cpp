#include<iostream>
#include<set>
using namespace std;
int main(){
    set<long long> st;
    st.insert(1);
    int count=0;
    while(count < 1499){
        st.insert(*st.begin() * 2);
        st.insert(*st.begin() * 3);
        st.insert(*st.begin() * 5);
        st.erase(st.begin());
        count ++ ;
    }
    cout << "The 1500'th ugly number is " << *st.begin() <<".\n";
    return 0;
}
