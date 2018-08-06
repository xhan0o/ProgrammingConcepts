#include <stdio.h>
int main() {
  int n,rnum = 0,rem;

  printf("Enter num:");
  scanf("%d",&n);
  int onum = n;

  while (n != 0) {
    rem = n%10;
    rnum = rnum*10 + rem;
    n/=10;
  }

  (onum == rnum) ? printf("palindrome") : printf("not palindrome");
  return 0;
}
