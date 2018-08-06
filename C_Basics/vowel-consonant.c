#include<stdio.h>
int main(){
  char c;
  int lowerV,upperV;

  printf("Enter an alphabet: " );
  scanf("%c",&c);

  lowerV = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  upperV = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  (lowerV || upperV) ? printf("is vowel") : printf("is consonant");
  //if (lowerV || upperV)
  //  printf("is vowel");
  //else
  //  printf("is consonant");
  return 0;

}
