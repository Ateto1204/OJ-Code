#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int time;
    cin>>time;
    while(time--){
        int m,n;
        cin>>m>>n;
        string p[m], ans="";
        for(int i=0; i<m; i++)cin>>p[i];
        for(int i=0; i<n; i++){
            int a=0,t=0,c=0,g=0;
            for(int j=0; j<m; j++){
                switch(p[j][i]){
                    case 'A':
                        a++;
                        break;
                    case 'T':
                        t++;
                        break;
                    case 'C':
                        c++;
                        break;
                    case 'G':
                        g++;
                        break;
                }
            }
            if(a>=t&&a>=c&&a>=g)ans+="A";
            else if(t>=a&&t>=c&&t>=g)ans+="T";
            else if(c>=a&&c>=t&&c>=g)ans+="C";
            else ans+="G";
        }
        int k=0;
        cout<<ans<<'\n';
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(ans[j]!=p[i][j])k++;
            }
        }
        cout<<k<<'\n';
    }
    return 0;
}
