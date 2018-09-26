#include<iostream>
int global = 0;
volatile int v = 0;

void foo(int j){
  static int i = 0;
  std::cout << "I: " << i << " & J: " << j << '\n';
  i++, j++;
  std::cout << "J++: "<< j << '\n';
}
void bar(){
  int x=0;
  x++;
  global++;
  v++;
  std::cout << "X: " << x << '\n';
  std::cout << "Global: " << global << '\n';
  std::cout << "Volatile V: " << v << '\n';
}

int main(){
  int j= 0;
  int i = 0;
  const int x = 0;
  for (i;i<=5;i++){
    foo(j);
    bar();
  }
  return 0;
}
