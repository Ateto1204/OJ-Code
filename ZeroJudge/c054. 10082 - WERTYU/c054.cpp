#include<iostream>
#include<map>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    map<char, char> mp;
    mp['='] = '-', mp['-'] = '0', mp['0'] = '9', mp['9'] = '8', mp['8'] = '7', mp['7'] = '6';
    mp['6'] = '5', mp['5'] = '4', mp['4'] = '3', mp['3'] = '2', mp['2'] = '1', mp['1'] = '`';
    mp['\\'] = ']', mp[']'] = '[', mp['['] = 'P', mp['P'] = 'O', mp['O'] = 'I', mp['I'] = 'U';
    mp['U'] = 'Y', mp['Y'] = 'T', mp['T'] = 'R', mp['R'] = 'E', mp['E'] = 'W', mp['W'] = 'Q';
    mp['\''] = ';', mp[';'] = 'L', mp['L'] = 'K', mp['K'] = 'J', mp['J'] = 'H';
    mp['H'] = 'G', mp['G'] = 'F', mp['F'] = 'D', mp['D'] = 'S', mp['S'] = 'A';
    mp['/'] = '.', mp['.'] = ',', mp[','] = 'M', mp['M'] = 'N',  mp['N'] = 'B';
    mp['B'] = 'V', mp['V'] = 'C', mp['C'] = 'X', mp['X'] = 'Z', mp[' '] = ' ';
    string n;
    while(getline(cin, n)){
        for(int i=0; i<n.length(); i++){
            cout << mp[n[i]];
        }
        cout << '\n';
    }
    return 0;
}
