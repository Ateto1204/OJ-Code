// http://domen111.github.io/UVa-Easy-Viewer/?11111
#include<bits/stdc++.h>
using namespace std;
string n;
stringstream ss;
int tmp;
signed main(){
    while(getline(cin, n)){
        ss.str("");
        ss.clear();
        ss << n;
        stack<int> val, st;
        bool result = 1;
        while(ss >> tmp){
            if(tmp < 0)st.push(tmp);
            else if(tmp > 0){
                if(!st.empty() && -tmp == st.top()){
                    val.pop();
                    st.pop();
                }else{
                    result = 0;
                    break;
                }
            }
            if(val.empty() && tmp < 0)val.push(tmp);
            else if(tmp < 0){
                int num = val.top() - tmp;
                if(num >= 0 && !val.empty()){
                    result = 0;
                    break;
                }
                val.pop();
                val.push(num);
                val.push(tmp);
            }
        }
        if(!st.empty()){
        	result = 0;
        }
        if(result)cout << ":-) Matrioshka!\n";
        else cout << ":-( Try again.\n";
    }
    return 0;
}
