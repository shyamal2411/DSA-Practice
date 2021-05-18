#include <bits/stdc++.h>
using namespace std;

//Time Complexity: O(n)
int simplepower(int a, int b)
{
    if(b==0)
    return 1;

    return a*simplepower(a,b-1);
}

// Time Complexity: O(log n)
int fastpower(int a, int b)
{
    if(b==0)
    return 1;

    int smallans= fastpower(a,b/2);
    smallans*=smallans;

    if(b&1)
    return a*smallans;

    return smallans;
}


int main() {
  int a, b;
  cin >> a >> b;
    cout<< simplepower(a,b)<<endl;
    cout<< fastpower(a,b)<<endl; //
    
  return 0;
}