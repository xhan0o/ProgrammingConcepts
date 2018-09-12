#include <iostream>
#include <string.h>

using namespace std;

class person{
  char *name;
  int id;
public:
  void setdetails(char *x, int y){
    name = new char [strlen(x)];
    strcpy(name,x);
    id = y;
  }
  void getdetails(){
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
  }
};

int main(){
  person p1;
  p1.setdetails("person1",01);
  p1.getdetails();
  return 0;
}
