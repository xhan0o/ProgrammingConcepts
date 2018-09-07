#include <string>
#include <iostream>

class Human {
private:
  std::string nameC;

public:
  Human(const std::string & name) : nameC(name){  }

  std::string name() const {return nameC;}

  void talkTo(const Human & person) const{
    std::cout << nameC << "says: Hello, " << person.name() << "!"<< std::endl;
  }
};

int main() {
  Human joe("joe");
  Human jennie("jennie");
  joe.talkTo(jennie);
  jennie.talkTo(joe);
  std::cout << std::endl << "Press 'Enter' to exit";
  std::cin.ignore();
  return 0;
}
