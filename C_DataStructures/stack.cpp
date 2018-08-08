#include <iostream>
#include <stack>

using namespace std;

void showstack(stack <int> stk)
{
    stack <int> g = stk;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main ()
{
    stack <int> stk;
    stk.push(10);
    stk.push(30);
    stk.push(20);
    stk.push(5);
    stk.push(1);

    cout << "The stack stk is : ";
    showstack(stk);

    cout << "\nstk.size() : " << stk.size();
    cout << "\nstk.top() : " << stk.top();


    cout << "\nstk.pop() : ";
    stk.pop();
    showstack(stk);

    return 0;
}
