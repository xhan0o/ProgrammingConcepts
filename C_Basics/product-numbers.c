#include <stdio.h>

double mul(double one, double two){
  return (one*two);
}

int main(){
  double one,two;
  printf("Enter two integers");
  scanf("%lf %lf", &one,&two);
  printf("%lf", mul(one,two));
  return 0;
}
