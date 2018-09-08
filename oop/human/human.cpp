#include <string>
#include <iostream>

using namespace std;
class Human {
protected:
  string nameC;

public:
  Human(const string & name) : nameC(name){  }

  string name() const {return nameC;}

  void talkTo(const Human & person) const{
    cout << nameC << " says: Hello, " << person.name() << "!"<< endl;
  }
};

class ChinesePerson : public Human {
public:
  ChinesePerson (const string & name) : Human (name) {  }

  void talkTo(const Human & person) const {
    cout << nameC << " says: Neih Hou, " << person.name() << "!" << endl;
  }
};

int main() {
  Human joe("Joe");
  ChinesePerson li ("Li");
  li.talkTo(joe);
  joe.talkTo(li);
  cout << endl << "Press 'Enter' to exit";
  cin.ignore();
  return 0;
}
