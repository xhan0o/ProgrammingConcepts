#include <stdio.h>

int main(){
  int num;
  printf("enter number :");
  scanf("%d",&num);

  // condition ? true : false 
  (num % 2 == 0) ? printf("%d is even",num) : printf("%d is odd",num);
  return 0;

}
