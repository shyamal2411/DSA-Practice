#include<iostream>
using namespace std;
int main()
{
  int n,h,a,sum=0;
  cin>>n>>h;//number and height of friends
  while(n--)
{
  cin>> a;
  if(a>h){
  sum++;
}
sum++;
}
  //bit difficult to understand.
cout<<sum;
return 0;
}
