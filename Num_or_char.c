/*Question: To check whether an input from user is number or character. If character whether it is upper or lower case*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char in,*ptr;
    printf("Enter the input: ");
    scanf("%c",&in);
    ptr=&in;
    if (isdigit(*ptr)){
        printf("The given input is a number.");
    }
    else if(isalpha(*ptr)){
        if (isupper(*ptr)){
            printf("The given input is a upper case character.");
        }
        else if(islower(*ptr)){
            printf("The given input is a lower case character.");
        }
    }
    else {
        printf("The given input is not a character or number.");
    }
    return 0;
}