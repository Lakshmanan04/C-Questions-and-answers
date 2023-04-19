/*Question: Find the mean of n numbers usings array and pointers.*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    int i,*a=array,s=0;
    for (i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",(a+i));
    }
    float mean;
    for (i=0;i<n;i++){
        s+=*(a+i);
    }
    mean=(float)s/n;
    printf("The mean is %f",mean);
    return 0;
}