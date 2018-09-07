#include <string>
#include <iostream>

using namespace std;
class Human {
private:
  string nameC;

public:
  Human(const string & name) : nameC(name){  }

  string name() const {return nameC;}

  void talkTo(const Human & person) const{
    cout << nameC << "says: Hello, " << person.name() << "!"<< endl;
  }
};

int main() {
  Human joe("joe");
  Human jennie("jennie");
  joe.talkTo(jennie);
  jennie.talkTo(joe);
  cout << endl << "Press 'Enter' to exit";
  cin.ignore();
  return 0;
}
