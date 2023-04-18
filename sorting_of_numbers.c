/*Question: Sorting list of numbers using arrays*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int i,j,array[n];
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int t;
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (array[i]>array[j]){
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }
        }
    }
    printf("The sorted list of numbers:\n");
    for (i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}
