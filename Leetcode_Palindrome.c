#include <math.h>
bool isPalindrome(int x){
    long int t=x,r,reverse=0;
    while (t>0){
        r=t%10;
        reverse=reverse*10+r;
        t/=10;
    }
    if (x!=reverse || x>pow(2,31) || x<-pow(2,31)) {
        return false;
    }
    else {
        return true;
    }
}
