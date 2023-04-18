#include <math.h>
int reverse(int x){
  int remainder;
  long int reverse=0;
  int temp=x;
  if (x<=-2147483648){
    return 0;
  }
  while (abs(temp)>0){
      remainder=temp%10;
      reverse=reverse*10+remainder;
      temp/=10;
  }
  if ((reverse)>pow(2,31) || reverse<-pow(2,31)){
    return 0;
  }
  else {
    return reverse;
  }
}
