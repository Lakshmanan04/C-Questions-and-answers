/*Question: Find transpose of a matrix*/
#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int mat[r][c],trans[c][r];
    for (i=0;i<r;i++){
        printf("Enter the elements of row %d one below another:\n",i+1);
        for (j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            trans[j][i]=mat[i][j];
        }
    }
    printf("The transpose of the given matrix:\n");
    for (i=0;i<c;i++){
        for (j=0;j<r;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
