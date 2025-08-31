#include <stdio.h>
#include <math.h>
int main(){
    int n,k,i,j;
    printf("Enter the number of rows");
    scanf("%d", &n);
    printf("Enter the number of columns");
    scanf("%d", &k);
    for (i=1; i <= n; i++){
        for (j=1; j <= k; j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
}