#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int> v;

  for (unsigned int i = 1; i<=5; i++){
    v.push_back(i);
  }

  for (auto i = v.begin(); i != v.end(); ++i){
         cout << *i << " ";
  }
  cout << endl;
  //Size of vector
  if (!v.empty()){
  cout << "Size: " << v.size() << endl;
  cout << "Size: " << v.max_size() << endl; //Size of big num
  cout << "At 4th element: " << v.at(4) << endl;
  cout << "front: " << v.front() << endl;
  cout << "back: " << v.back() << endl;
}

}
