#include<stdio.h>

int main()
{
  long long n;
  int count = 0;

  printf ("Enter number: ");
  scanf("%lld",&n);

  while (n != 0) {
    n/=10;
    ++count;
  }
  printf("The number of digits are %d",count);
}
