#include<cstdio>
int main(){
    int case_num;
    scanf("%d",&case_num);
    while(case_num --){
        int input_num;
        scanf("%d",&input_num);
        int input[100];
        for(int i = 0; i < input_num; i++){
            scanf("%d",&input[i]);
        }
        int maximum = input[0];
        for(int i = 1; i<input_num; i++){
            if(input[i-1] > 0){
                    input[i] += input[i-1];
            }
            if(input[i] > maximum){
                maximum = input[i];
            }
        }
        printf("%d\n", maximum);
    }
    return 0;
}
