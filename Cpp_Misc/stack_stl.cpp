
// CPP program to demonstrate working of STL stack

#include <iostream>
#include <stack>

using namespace std;

void showstack(stack <string> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}

int main ()
{
    stack <string> s;
    s.push("The");
    s.push("he");
    s.push("Te");
    s.push("Th");
    s.push("Tie");
    s.push("Tue");
    s.push("This");
    s.push("I'm here");
    cout << "The stack is : ";
    showstack(s);

    cout << "\ns.size() : " << s.size();
    cout << "\ns.top() : " << s.top();

    cout << "\ns.pop() : ";
    s.pop();
    showstack(s);

    return 0;
}
