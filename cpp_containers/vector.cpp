#include<iostream>
#include<vector>

using namespace std;

void print_vector( vector <int> vec){
  for (auto i = vec.begin(); i != vec.end(); ++i){
         cout << *i << " ";
  }
  cout<< endl;
}

int main(){
  vector<int> v;
  vector<int> x (5,9);

  for (unsigned int i = 1; i<=5; i++){
    v.push_back(i);
  }
  cout << "v: " << endl;
  print_vector(v);

  vector<int> v1 (v); // Copy vector by passing constructor
  cout << "V1: " << endl;
  print_vector (v1);

  // Copy vecor by in-build copy function
  vector<int> v2;
  vector<int> v3;
  copy(v.begin(),v.end(),back_inserter(v2));
  v3.assign(v.begin(),v.end());
  cout << "V2 & V3: " << endl;
  print_vector (v2);
  print_vector (v3);

  //Swap Vectros - constant complexity
  cout << "X & V: " << '\n';
  print_vector(x);
  print_vector(v);
  x.swap(v);
  cout << "X & V: " << '\n';
  print_vector(x);
  print_vector(v);
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
