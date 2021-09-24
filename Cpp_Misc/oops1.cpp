#include<iostream>
using namespace std;

      /*inheritance syntax, unable to understand*/


class vehicle {
public:
  string brand = "Ford";
  void honk(){
    cout<<"Horn sound to be kept here"<<endl;
  }
};
class car: public vehicle {
public:
  string model = "Mustang";
};
int main()
{
  car mycar;
  mycar.honk();
  cout<<mycar.brand +" ";
  mycar.model;
  return 0;
}
