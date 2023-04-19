/*question: Display the sum and average of numbers from m to n using pointers*/
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the value of m and n seperated by space: ");
    scanf("%d %d",&m,&n);
    int *m_ptr=&m,*n_ptr=&n;
    int i,sum=0;
    float avg;
    for (i=*m_ptr;i<=*n_ptr;i++){
        sum+=i;
    }
    avg=(float)sum/(*n_ptr-*m_ptr+1);
    printf("The sum is %d\n",sum);
    printf("The average is %f",avg);
    return 0;
}