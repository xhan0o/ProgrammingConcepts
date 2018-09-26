#include <iostream>

using namespace std;

int main(){
  for (int i = 0; i<=20 ; i++){
  if (i%3 && i%5) {
    std::cout << i << '\n';
    continue;
  }
  if (i % 3 == 0) std::cout << "foo";
  if (i % 5 == 0) std::cout << "bar";
  std::cout << '\n';
  }
  return 0;
}
