
// ¦¨ÁZ«ü¼Ð

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,i;
    cin >> t;
    int n[t];
    for(i=0; i<t; i++){
        cin >> n[i];
    }
    sort(n, n+t);
    for(int i:n)cout << i << ' ';
    cout << '\n';
    int a=-1,b=-1;
    i=0;
    while(n[i]<60 && i<t){
        a = n[i];
        i++;
    }
    i=t-1;
    while(n[i]>=60 && i>=0){
        b = n[i];
        i--;
    }
    if(a!=-1 && b!=-1)cout << a << '\n' << b << '\n';
    else if(a!=-1)cout << a << "\nworst case\n";
    else cout << "best case\n" << b << '\n';
    return 0;
}
