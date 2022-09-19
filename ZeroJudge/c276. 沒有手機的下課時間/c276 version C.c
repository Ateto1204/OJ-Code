#include<stdio.h>
char n[4];// n為守方
char m[4];// m為攻方

int main(){
    int t;
    char line;
    scanf("%c%c%c%c",&n[0],&n[1],&n[2],&n[3]);
    scanf("%d",&t);
    while(t--){
        int A=0, B=0;
        scanf("%c",&line);
        scanf("%c%c%c%c",&m[0],&m[1],&m[2],&m[3]);
        for(int i=0; i<4; i++){
            if(n[i]==m[i]){
                A++;
                m[i]='x';
            }
        }
        for(int i=0; i<4; i++){
            if(m[i]!='x'){
                for(int j=0; j<4; j++){
                    if(m[i]==n[j]){
                        B++;
                        m[i]='x';
                    }
                }
            }
        }
        printf("%dA%dB\n",A,B);
    }
    return 0;
}
