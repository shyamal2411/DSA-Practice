#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//template <class T>
class node {
public:
	int data;
	node *next;
};

//template <class T>
class linkedlist
{
private:
	node *first;
public:
	linkedlist() {first = NULL;}
	linkedlist(int a[], int n);
	~linkedlist();

	void Display();
	void Insert(int index, int  x);
	int Delete(int index);
	int Length();
};
//template<class T>
linkedlist::linkedlist (int a[], int n)
{
	node *last, *t;
	int i = 0;

	first = new node;
	first->data = a[0];
	first->next = NULL;
	last = first;

	for (i = 1; i < n; i++)
	{
		t = new node;
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

//template <class T>
linkedlist::~linkedlist()
{
	node *p = first;
	while (first)
	{
		first = first->next;
		delete p;
		p = first;
	}
}
//template <class T>
void linkedlist::Display()
{
	node *p = first;

	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
int linkedlist::Length()
{
	node *p = first;
	int len = 0;
	while (p)
	{
		len++;
		p = p->next;
	}
	return len;
}

void linkedlist::Insert(int index, int x)
{
	node *t, *p = first;

	if (index < 0 || index > Length())
		return;
	t = new node;
	t->data = x;
	t->next = NULL;

	if (index == 0)
	{
		t->next = first;
		first = t;
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
			p = p->next;
		t->next = p->next;
		p->next = t;
	}
}

int linkedlist::Delete(int index)
{
	node *p, *q = NULL;
	int x = -1;

	if (index < 1 || index < Length())
		return -1;
	if (index == 1)
	{
		p = first;
		first = first->next;
		x = p->data;
		delete p;
	}
	else
	{
		p = first;
		for (int i = 0; i < index - 1; i++)
		{
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		delete p;
	}
	return x;
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 2, 3, 4, 5};
	linkedlist l(a, 5);
	l.Insert(3, 10);

	/*cout << "Length: " << l.Length() << endl;
	cout << "Delete: " << l.Delete(4) << endl;*/
	l.Display();

	return 0;
}