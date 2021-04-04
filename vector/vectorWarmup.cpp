#include <bits/stdc++.h>
using namespace std;

int main() {
//1st
//   string arr[] = {"First", "Second", "third"};

//   vector<string> vecofStr(arr, arr + sizeof(arr) / sizeof(string));

//   for (string str : vecofStr)
//     cout << str << endl;

//2nd
// vector<int> vecofStr(5);
// for(int x: vecofStr)
// cout<<x<<endl; 

// vector<string> vecofStr;
// vecofStr.push_back("first");
// vecofStr.push_back("second");
// vecofStr.push_back("third");

// vector<string> vecofStr1(vecofStr);

//4th
// vector<int> v{1,2,3,4,5};
// int n=v.size();
// cout<<n<<endl;

// 5th
// vector<int> v{1,2,3,4,5};
// cout<<v.max_size()<<endl;

//6th
vector<int> v{1,2,3,4,5};
for(int i= 0; i <v.size(); i++)
cout<<v.operator[](i)<<" ";
}