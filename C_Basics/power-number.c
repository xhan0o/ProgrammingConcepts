#include<stdio.h>
int main() {
  int base,expo;

  long long result = 1;

  printf("Enter the base:");
  scanf("%d", &base);

  printf("Enter expo:");
  scanf("%d", &expo);

  while ( expo != 0) {
    result *= base;
    --expo;
  }
  printf("answer = %lld", result );
  return 0;
}
