#include <stdio.h>
int addnum(int n);

int main (){
  int num;

  printf("Enter number: ");
  scanf("%d",&num);

  printf("Sum = %d", addnum(num));
  return 0;
}

int addnum(int num){
  if (num !=0)
    return num + addnum(num-1);
  else
    return num;
}
