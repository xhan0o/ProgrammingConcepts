#include <stdio.h>

int sum(int one, int two){
  return (one+two);
}

int main(){
  int one,two;
  printf("Enter two integers");
  scanf("%d %d", &one,&two);
  printf("%d", sum(one,two));
  return 0;
}
