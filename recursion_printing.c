/*Qusetion: Write a recursive function that reads N and prints from N-1 to 0*/
#include <stdio.h>
void display(int a){
    printf("%d",a-1);
    if (a-1>0){
        display(a-1);
    }
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    display(n);
    return 0;
}