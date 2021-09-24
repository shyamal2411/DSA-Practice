#include<iostream>
using namespace std;
/*
int myfunction(int x)
{
    return 5+x;
}

int main() {
  cout<<myfunction(3);
  return 0;
}
*/
/*int plusfunction(int x,int y){
  return x+y;
}
double plusfunction(double x,double y){
  return x+y;
}

int main()
{
  int mynum =plusfunction (8,5);
  double mynum2 =plusfunction(4.3,5.6);
  cout<<"Int: "<<mynum<<endl;
  cout<<"double: "<<mynum2;
  return 0;
}*/


/*
class myclass{
public:
  int mynum;
  string mystring;
};

int main()
{
  myclass myobj;

  myobj.mynum =15;
  myobj.mystring ="Some value to be printed";

  cout << myobj.mynum << '\n';
  cout << myobj.mystring << '\n';

  return 0;
}*/


//create class with some attributes.
class Car{
public:
  string brand;
  string model;
  int year;
};

int main() {
//first object of car.
Car carobj1;
carobj1.brand ="ford";
carobj1.model ="Mustang";
carobj1.year =2001;

//another object of car.
Car carobj2;
carobj2.brand ="BMW";
carobj2.model="x5";
carobj2.year =2000;

//printing all the attribute values.
cout<<carobj1.brand<<endl<<carobj1.model<<endl<<carobj1.year<<endl<<endl;

cout<<carobj2.brand<<endl<<carobj2.model<<endl<<carobj2.year<<endl;
  return 0;
}
