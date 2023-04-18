int lengthOfLastWord(char * s){
    int l=strlen(s);
    int i,c=0,f=0;
    for (i=l-1;i>=0;i--){
        if (s[i]!=' ' && f==0){
            f=1;
            c+=1;
            continue;
        }
        else if(s[i]==' ' && f==0){
            continue;
        }
        else if (s[i]==' ' && f==1){
            break;
        }
        c+=1;
    }
    return c;
}
