#include <stdio.h>
#include <math.h>

long long d2b(int num);

int main(){
    int num;
    printf ("enter num");
    scanf("%d",&num);
    printf("%lld\n",d2b(num));
}

long long d2b(int num){
  long long binarynum = 0;
  int reminder,i=1b,count =1;

  while (num!=0)
  {
    reminder=num%2;

    num/=2;
    binarynum += i*reminder;
    i*=10;
  }
  return binarynum;
}
