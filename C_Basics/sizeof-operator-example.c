#include <stdio.h>

int main(){
  int i;
  float f;
  double d;
  char c;
  long l;
  long long ll;
  long double ld;



  printf("Size of int = %ld bytes \nSize of float = %ld bytes \nSize of double = %ld bytes \nSize of char = %ld bytes \n", sizeof(i), sizeof(f), sizeof(d), sizeof(c));
  printf("Size of long = %ld bytes \nSize of long long= %ld bytes \nSize of long double = %ld bytes \n", sizeof(l), sizeof(ll), sizeof(ld));
  return 0;
}
