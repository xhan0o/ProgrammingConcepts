#include <stdio.h>
int main(){
  double one,two;
  printf("Enter first number");
  scanf("%lf",&one);
  printf("Enter second number");
  scanf("%lf",&two);

  one = one - two;
  two = one + two;
  one = two - one;

  printf("First = %.1lf\n Second = %.1lf", one,two );
  return 0;

}
