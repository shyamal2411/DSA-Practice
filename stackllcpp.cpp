#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
};
class stack
{
private:
	node *top;
public:
	stack() {top = NULL;}

	void push(int x);
	int pop();
	void display();
}

 int stack::push(int x)
{
	node *t = new node;
	if (t == NULL)
		cout << "Stacck is full";
	else
	{
		t->data = x;
		t->next = top;
		top = t;
	}
}

int stack::pop()
{
	int x = -1;
	if (top == NULL)
		cout << "Stack is empty\n";
	else
	{
		x = top->data;
		node *t = top;
		top = top->next;
		delete t;
	}
	return x;
}
void stack::display()
{
	node *p = top;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stack stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);

	stk.display();
	return 0;
}