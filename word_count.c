/* Question: Read and print text. Also count the number of characters,words and lines in the text*/
#include <stdio.h>
int main(){
    char text[2000];
    int i,char_count=0,word_count=0,line_count=0;
    printf("Enter the text:\n");
    fgets(text,2000,stdin);
    printf("The given text is:\n");
    printf(text);
    i=0;
    while (text[i]!='\0'){
        if (i!=0){
            if ((text[i]==' ' && text[i-1]!=' ') || text[i+1]=='\0'){
                word_count+=1;
            }
            else if(text[i]=='.'){
                line_count+=1;
            }
        }
        if (text[i]!=' '){
            char_count+=1;
        }
        i++;
    }
    printf("Number of charactera: %d\n",char_count);
    printf("Number of words: %d\n",word_count);
    printf("Number of line: %d\n",line_count);
    return 0;
}