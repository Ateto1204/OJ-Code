#include<bits/stdc++.h>
signed main(){
    int n;
    while(std::cin >> n && n){
        int k = (int)sqrt(n);
        if(k*k == n)std::cout << "yes\n";
        else std::cout << "no\n";
    }
    return 0;
}
