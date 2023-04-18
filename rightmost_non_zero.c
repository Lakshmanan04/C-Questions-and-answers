/*Question: Find the rightmost non zero digit of n!*/
#include <stdio.h>
int rightmost_non_zero(int a){
    long long int fact=1;
    int i;
    for (i=1;i<=a;i++){
        fact*=i;
    }
    long long int temp=fact;
    int ans;
    while (temp>0){
        if (temp%10!=0){
            ans=temp%10;
            return ans;
            break;
        }
        temp/=10;
    }
}
int main(){
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    r=rightmost_non_zero(n);
    printf("The rightmost non zero digit is %d",r);
    return 0;
}