#include<iostream>
using namespace std;

          //multi level inheritance
          //unable to understand.


class my{
public:
  void myfunc()
  {
    cout<<"Some content in parent class.";
  }
};

class mychild: public my{

};
class mygrandchild: public mychild{

};
int main()
{
  mygrandchild myobj;
  myobj.myfunc();
  return 0;
}
