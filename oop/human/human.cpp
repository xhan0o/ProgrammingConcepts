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
    cout << nameC << " says: Hello, " << person.name() << "!"<< endl;
  }
};

int main() {
  Human joe("joe");
  Human jennie("jennie");
  joe.talkTo(jennie);
  jennie.talkTo(joe);

  Human * pointerToJoe = &joe;
  Human * pointerToJennie = &jennie;

  pointerToJoe -> talkTo(jennie);
  pointerToJennie -> talkTo(joe);

  pointerToJoe -> talkTo(*pointerToJennie);
  pointerToJennie -> talkTo(*pointerToJoe);

  cout << endl << &joe << endl;
  cout << pointerToJoe << endl;
  cout << &jennie << endl;
  cout << pointerToJennie << endl << endl;

  Human & referenceToJoe = *pointerToJoe;
  Human & referenceToJennie = *pointerToJennie;

  referenceToJoe.talkTo(referenceToJennie);
  referenceToJennie.talkTo(referenceToJoe);

  cout << endl << "Press 'Enter' to exit";
  cin.ignore();
  return 0;
}
