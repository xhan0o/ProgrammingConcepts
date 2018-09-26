#include <iostream>
#include <stack>

using namespace std;

struct MyStack {
  stack <int> s;
  int minEle;

  void showstack(){
      stack <int> g = s;
      while (!g.empty())
      {
          cout << '\t' << g.top();
          g.pop();
      }
      cout << '\n';
  }

  void getMin(){
    if (s.empty()) std::cout << "stack is empty" << '\n';
    else std::cout << "Min ele of stack is " << minEle << '\n';
    }

  void peek(){
    if (s.empty()){
      std::cout << "stack is empty" << '\n';
      return;
    }
    int t = s.top();
    std::cout << "Top element is";
    (t < minEle) ? cout<<minEle : cout<< t;
  }

  void pop(){
    if (s.empty()){
      std::cout << "stack is empty" << '\n';
      return;
    }
    cout << "top element removed: ";
    int t = s.top();
    s.pop();

    if (t < minEle){
      cout << minEle << "\n";
      minEle = 2*minEle -t;
    }
    else
      cout << t << "\n";
  }
  void push(int x){
    if (s.empty()){
      minEle = x;
      s.push(x);
      cout << "Number inserted: " << x << '\n';
      return;
    }

    if (x < minEle){
      s.push(2*x - minEle);
      minEle = x;
    }
    else
    s.push(x);

    cout << "Number inserted: " << x << "\n";
  }
};

int main(){
  MyStack s;
  s.push(3);
  s.push(5);
  s.showstack();
  s.getMin();
  s.push(2);
  s.showstack();
  s.push(1);
  s.showstack();
  s.getMin();
  s.pop();
  s.showstack();
  s.getMin();
  s.showstack();
  s.pop();
  s.peek();

  return 0;
}
