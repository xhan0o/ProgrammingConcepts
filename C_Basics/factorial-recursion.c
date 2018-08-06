#include <stdio.h>

long int fact(int num){
  if (num>=1)
   return num * fact(num-1);
  else
    return 1;
}

void main(){
  int num;
  printf("Enter number:");
  scanf("%d",&num);
  printf("%ld", fact(num));
}
