#include <iostream>
using namespace std;

class abstraction
{
  private:
    int a,b;

  public:
    //Set values of private members
    void set(int x, int y){
      a = x;
      b = y;
    }

    void display_area(){
      cout<< "area = " << a*b << endl;
    }
};

int main(){
  abstraction object;
  object.set(3,6);
  object.display_area();
  return 0;
}
