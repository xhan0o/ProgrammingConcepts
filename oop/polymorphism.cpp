
#include<bits/stdc++.h>

using namespace std;

//Function Overloading -->
//Change in 1) number and 2)type of arguments

class Overloading{
public:
  void func(int x){
    cout << "Value of arg is " << x << endl;
  }
  void func(double x){
    cout << "Value of arg is " << x << endl;
  }
  void func(int x, int y){
    cout << "Value of args are " << x << " " << y << endl;
  }
};

//Operator overloading
class Complex{
private:
  int real,imag;
public:
  Complex (int r=0, int i = 0) {real = r; imag = i;}
}

int main(){

  //Driver for funcltion Overloading
  Overloading obj1;
  obj1.func(7);
  obj1.func(7.5);
  obj1.func(8,9);

  //Driver for operator Overloading
  return 0;
}
