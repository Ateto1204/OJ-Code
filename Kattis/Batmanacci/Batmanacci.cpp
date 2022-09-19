#include<bits/stdc++.h>
#define int unsigned long long

int fibs[88], n, k;

char bat(int n, int k){
    if (n == 1) return 'N';
    if (n == 2) return 'A';
    int l = fibs[n-2];
    return l < k ? bat(n-1, k-l) : bat(n-2, k);
}

signed main(){
    fibs[0] = 0;
    fibs[1] = 1;
    for (int i = 2; i < 88; i++){
        fibs[i] = fibs[i-2] + fibs[i-1];
    }
    std::cin >> n >> k;
    n = n>89 ? 89:n;
    std::cout << bat(n, k) << '\n';
    return 0;
}
