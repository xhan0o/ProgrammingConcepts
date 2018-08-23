
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
  Complex operator + (Complex const &obj){
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
  }
  void print () {cout << real << " + i" << imag << endl;}
};

//Runtime overridding

//Function overridding
class Parent{
public:
  void print() { cout << "Parent Class" << endl; }
};
class Child : public Parent{
public:
  void print1() { cout << "Child Class" << endl; }
};

int main(){

  //Driver for funcltion Overloading
  Overloading obj1;
  obj1.func(7);
  obj1.func(7.5);
  obj1.func(8,9);

  //Driver for operator Overloading
  Complex c1(10,5) , c2(2,4);
  Complex c3 = c1 + c2;
  c3.print();

  //Driver for Function overridding
  Parent ord1;
  Child ord2 = Child();
  ord1.print();
  ord2.print1();
  return 0;
}
