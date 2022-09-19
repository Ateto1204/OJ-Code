// http://programming-study-notes.blogspot.com/2014/01/uva-714-copying-books.html
// Binary Search
#include <cstdio>
#include <algorithm>
using namespace std;

int M, K;
int p[501];
int ans[501][501],n[501]; // n is the index of ans[i];

int main(){
    int N;
    scanf("%d",&N);
    while (N--){
        scanf ("%d%d",&M,&K);
        long long int Min=0,Max=0,mid;
        for (int i=0;i<M;i++) {
            scanf("%d",&p[i]);
            if (p[i] > Min) Min=p[i];
            Max += p[i];
        }

        while (Min < Max){
            int amount=1;
            long long int sum=0;
            mid = (Min+Max)/2;
            for (int i=0;i<M;i++){
                if (sum+p[i] > mid){
                    amount++;
                    sum = 0;
                }
                sum += p[i];
            }
            if (amount > K)  Min = mid+1;
            else Max = mid;
        }

        fill (n,n+501,0);
        long long sum = 0;
        // �]���p�G���h�ոѡA�᭱���H�n���t�h�@�I�ѡA�]��i,j�q�᭱�}�l
        for (int i=M-1, j=K-1; i>=0; i--){  // i: book index, j: scriber index
            if (sum+p[i] > Max || j>i){     // j>i: �]���C�ӤH���ܤ֭n���@����
                j--;
                sum = 0;
            }
            sum += p[i];
            ans[j][n[j]++] = p[i];
        }

        for (int i=0; i<K; i++){
            for (int j=n[i]-1; j>=0; j--){
                if (i!=0 || j!=n[0]-1) printf(" ");
                printf("%d",ans[i][j]);
            }
            if (i != K-1) printf(" /");
        }
        printf("\n");
    }

    return 0;
}
