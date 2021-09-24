#include<iostream>
using namespace std;
/*
class myclass{
public:
  void mymethod(){
    std::cout << "Hey there" << '\n';
  }
};

int main()
{
  myclass myobj;
  myobj.mymethod();
  return 0;
}
*/

/*
class car{
public:

  int speed(int maxspeed);
};

int car::speed(int maxspeed){
  return maxspeed;
}
int main() {
car myobj;//object created for car.
cout<<myobj.speed(200);//call the method with arguement.
  return 0;
}*/

class car{
public:
  string brand;
  string model;
  int yr;
  car(string x,string y,int z){
    brand =x;
    model =y;
    yr=z;
  }
};
 int main() {
car carobj1("BMW","X5",1999);
car carobj2("FORD","MUSTANG",2001);

//printing all the attribute values.
cout<<carobj1.brand<<"\n"<<carobj1.model<<"\n"<<carobj1.yr<<"\n\n";

cout<<carobj2.brand<<"\n"<<carobj2.model<<"\n"<<carobj2.yr<<"\n";
  return 0;
}
