/*
1. ��r���ഫ���G���X�Ӥj�g�Τp�g����
2. �������X�ӭ��Ʀr��
3. �p�G���@�խ��Ʀr���j�� s �N�}�l�O������Ӳխ��Ʀr�������� s
*/
#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,k=1;
    bool con;
    string s;
    vector<int> vec;
    cin >> n >> s;
    con = (s[0]>='a' && s[0]<='z');
    for(int i=1; i<s.length(); i++){
        if(con == (s[i]>='a' && s[i]<='z')){
            k++;
        }else if(k>0){
            vec.push_back(k);
            k = 1;
            con = !con;
        }
    }
    vec.push_back(k);
    int start = 0;
    int result=0, sum=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]>=n && !start){
            start = 1;
            sum += n;
        }else if(vec[i] == n && start)sum += n;
        else if(vec[i] != n && start){
            if(vec[i] > n)sum += n;
            result = max(result, sum);
            sum = 0;
        }
    }
    cout << result << '\n';
    return 0;
}
