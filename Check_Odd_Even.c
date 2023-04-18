/*Question: Write a Function CheckOddEven(num) that checks if the num is odd or even.Use this fuction to find the sum of even and odd numbers in the input of N numbers*/
#include <stdio.h>
int CheckOddEven(int num){
    int f;
    if (num%2==0){
        f=1;
    }
    else{
        f=0;
    }
    return f;
}
int main() {
    int n;
    printf("Enter the number of elemnts: ");
    scanf("%d",&n);
    int i,flag,a,e=0,o=0;
    printf("\nEnter the elements one by one:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a);
        flag=CheckOddEven(a);
        if (flag==1){
            e+=a;
        }
        else {
            o+=a;
        }
    }
    printf("The sum of even elements is %d",e);
    printf("\nThe sum of odd elements is %d",o);
    return 0;
}
