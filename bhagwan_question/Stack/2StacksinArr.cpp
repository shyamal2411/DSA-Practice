#include <bits/stdc++.h>
using namespace std;
#define SIZE 1000

int arr[SIZE];
int top1 = -1;
int top2 = SIZE;

void push1(int data) {
  if (top1 < top2 - 1)
    arr[top1++] = data;

  else
    cout << "Stack full" << endl;
}

void push2(int data) {
  if (top1 < top2 - 1)
    arr[top2--] = data;

    else
    cout<<"Stack full"<<endl;
}

void pop1() {
    if(top1>=0){
      int popValue = arr[top1--];
      cout << popValue << endl;}

    else
    cout<<"Stack Empty"<<endl;
}

void pop2()
{
    if(top2< SIZE)
    {int popValue =arr[top2++];
    cout<<popValue<<endl;}

    else
    cout<<"Stack Empty"<<endl;
}

void print1()
{
    int i;
    for(i=top1; i>=0;i--)
        cout<<arr[i];
    
    cout <<endl;
}

void print2(){
    int i;
    for(i=top2;i<SIZE;i++)
    cout<<arr[i]<<endl;

    cout<<endl;
}

int main(){
    int arr[SIZE];
    int i;
    int n;

    for(i=1;i<=6;i++){
        push1(i);
        cout<<i<<endl;
    }
    for (i = 1; i <= 4; i++) {
      push2(i);
      cout << i << endl;
    }

    print1();
    print2();
n=top1+1;
    while(n)
    {
        pop1();
        n--;
    }
    pop1();

    return 0;
}