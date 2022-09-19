#include<cstdio>
int minIndex(int n[], int left, int right){
    int result=left;
    for(int i=left+1; i<right; i++){
        if(n[i]<n[result])result=i;
    }
    return result;
}
int sum(int n[], int left, int right){
    int result=0;
    for(int i=left; i<=right; i++){
        result+=n[i];
    }
    return result;
}
int main(){
    int t, left=0, right, ans, index, a, b;
    scanf("%d",&t);
    right=t-1;
    int n[t];
    for(int i=0; i<t; i++){
        scanf("%d", &n[i]);
    }
    while(left!=right){
        index = minIndex(n, left, right);
        a = sum(n, left, index-1);
        b = sum(n, index+1, right);
        if(a>b){
            right = index-1;
        }else{
            left = index+1;
        }
    }
    printf("%d\n", n[left]);
    return 0;
}
