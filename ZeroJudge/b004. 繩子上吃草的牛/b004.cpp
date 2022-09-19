#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
    int D,L;
    while(cin>>D>>L){
        // PI = 2*acos(0) = 3.14159...
        cout<<fixed<<setprecision(3)<<double(acos(0))*(L/2.0)*sqrt((L+D)*(L-D))<<'\n';
    }
    return 0;
}
