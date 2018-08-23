// Wrapping data / information under single unit.
//Leads to abstaction.
// Implementation of Getter, Setter


#include <iostream>

using namespace std;

class Encap{
private:
  int hidden;
public:
  //set the value of hidden var
  void set (int show){
    hidden = show;
  }
  //Return the value of hidden var
  int get(){
    return hidden;
  }
};

int main(){
  Encap obj;
  obj.set(55);
  cout << obj.get() << endl;
  return 0;
}
