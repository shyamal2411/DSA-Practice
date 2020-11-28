#include<iostream>
using namespace std;
void myfunction();
int main()
{
  cout<<"The call from main"<<endl;
  myfunction();
}
void myfunction()
{
  cout<<"Call from function";
}
