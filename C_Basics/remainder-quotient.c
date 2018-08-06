#include <stdio.h>

int main(){
  int devisor,quotient,reminder,dividend;

  printf("Enter dividend:");
  scanf("%d",&dividend);

  printf("Enter devisor");
  scanf("%d",&devisor);

  //quotient = dividend / devisor;
  //reminder = dividend % devisor;

  printf("Quotient = %d \n reminder = %d \n", dividend / devisor, dividend % devisor);
}
