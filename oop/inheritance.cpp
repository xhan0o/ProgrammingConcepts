#include <iostream>

using namespace std;
/*   Class Structure
            Vehicle     Fare    <-- Main Class
            /       \   /
          Car       Bus         <-- Inheritade classes

*/
//Main class
class Vehicle{
public:
  Vehicle(){
    cout << "This is Vehicle" << endl;
  }
};

//Main class 2
class Fare{
  public:
    Fare(){
      cout << "This is Fare" << endl;
    }
};

//Sub class using Vehicle class
class Car: public Vehicle{
public:
  Car(){
  cout << "This is Car" << endl;
}
};

//Sub class using 2 main class Fare and Vehicle
class Bus: public Vehicle, public Fare{
public:
  Bus(){
    cout << "This is Bus" << endl;
  }
};

//Main Function
int main(){
  cout << "Bus " << endl;
  Bus obj2;
  cout << "Car " << endl;
  Car obj1;
  return 0;
}
