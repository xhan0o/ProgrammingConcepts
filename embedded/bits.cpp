#include<iostream>
#include<bitset>

using namespace std;

//check nth bit of integer x
void check_bit(int x, int n){
  int bit;
  bit = (x >> n) & 1UL;
  cout << n <<"th bit is " << bit << '\n';
}

//set nth bit of integer x
int set_bit(int x, int n){
  x |= 1UL << n;
  return x;
}

//resetting nth bit of intereger x
int reset_bit(int x, int n){
  x &= ~(1UL << n);
  return x;
}

// swapping 2 values with XOR
void swap_here(int *x, int *y){
  cout << *x << endl;
  *x = 5;
  //return 0;
}

int main(){
  int a = 8;
  cout << bitset<sizeof(a)*8>(a) <<" A " << a << endl;

  check_bit(a,3);

  cout << a << endl;
  cout << set_bit(a,0) << endl;
  cout << bitset<sizeof(a)*8>(set_bit(a,0)) << endl;

  cout << a << endl;
  cout << reset_bit(a,0) << endl;
  cout << bitset<sizeof(a)*8>(reset_bit(a,0)) << endl;

  // Swap using XOR operator
  int c = 5;
  int d = 10;
  cout << c << " " << d << endl;
  c ^= d;
  d ^= c;
  c ^= d;
  cout << c << " " << d << endl;
  swap_here(&c,&d);
  cout << c << " " << d << endl;

  return 0;
}
