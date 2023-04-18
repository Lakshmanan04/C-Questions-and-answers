/*Question: Writ a C program that will read in numerical values of x and n, evaluate the formula using function power(x,n) and then the calculated result.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float power(float a,int b){
    float r=1,ans;
    int i;
    for (i=0;i<abs(b);i++){
        r*=a;        
    }
    if (b<0){
        r=1/r;
    }
    return r;
}
int main(){
    float x,y;
    int n;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enterthe value of n: ");
    scanf("%d",&n);
    y=power(x,n);
    printf("%f",y);
    return 0;
}