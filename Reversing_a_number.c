/*Question: Write a C function Reverse(num) that takes a integer num and reverses its digits*/
#include <stdio.h>
int  Reverse(int *n){
    int temp=*n,r,rev=0;
    while (temp>0){
        r=temp%10;
        rev=rev*10+r;
        temp/=10;
    }
    return rev;
}
int main()
{
    int num,ans;
    printf("Enter the number:");
    scanf("%d",&num);
    ans=Reverse(&num);
    printf("Reverse of the number is %d",ans);
    return 0;
}
