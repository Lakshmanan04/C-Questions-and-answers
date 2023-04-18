/*Question: Find whether a given matrix is lower triangular or upper triangular matrix*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n for the square matrix (nxn): ");
    scanf("%d",&n);
    int matrix[n][n];
    int i,j;
    for (i=0;i<n;i++){
        printf("Enter the elements of row %d one by one:\n",i+1);
        for (j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int f1=1;
    for (i=1;i<n;i++){
        for (j=0;j<i;j++){
            if (matrix[i][j]!=0){
                f1=0;
                break;
            }
        }
        if (f1==0){
            break;
        }
    }
    if (f1==1){
        printf("Upper triangular matrix");
    }
    int f2=1;
    for (i=0;i<n;i++){
        for (j=n-1;j>i;j--){
            if (matrix[i][j]!=0){
                f2=0;
                break;
            }
        }
        if (f2==0){
            break;
        }
    }
    if (f2==1){
        printf("Lower triangular matrix");
    }

    return 0;
}