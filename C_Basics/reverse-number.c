#include <stdio.h>
int main() {
  int n,rnum = 0,rem;

  printf("Enter num:");
  scanf("%d",&n);

  while (n != 0) {
    rem = n%10;
    rnum = rnum*10 + rem;
    n/=10;
  }
  printf("Reversed number = %d", rnum);
  return 0;
}
