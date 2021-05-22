// https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/
#include<bits/stdc++.h> 
using namespace std;

int countsetbit(int n){
int count=0;

while(n)
{
    count++;
    n&=(n-1);
}
return count;
}

int flipcount(int a, int b) {
  return countsetbit(a ^ b);
}

int main(){
int a,b;
cin>>a>>b;

cout<<"Ans: "<<flipcount(a,b)<<endl;
return 0;
}