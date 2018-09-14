#include<iostream>

#define NAME 010,020,030


void print_me(int a, int b, int c){
  std::cout << "ABC " << a+b+c << '\n';
}
void print_me(int a){
  std::cout << "a " << a << '\n';
}

int main(){
  print_me(NAME);
  print_me((NAME));
  return 0;
}
