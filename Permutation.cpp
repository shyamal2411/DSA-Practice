// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> ans;
// void permute(vector<int> & a, int idx)
// {
//     if(idx==a.size())
//     {
//         ans.push_back(a);
//         return;
//     }
//     for (int i=idx;i<a.size();i++)
//     {
//         swap(a[i],a[idx]);
//         permute(a,idx+1);
//         swap(a[i],a[idx]);
//     }
//     return;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(auto &i :a)
//     cin>>i;
//     permute(a,0);
//     for(auto v: ans)
//     {
//         for(auto i: v)
//         cout<<i<<" ";
//         cout<<"\n";
//     }
// }
#include <bits/stdc++.h>
using namespace std;
#define N 10

void print(int* num, int n) {
  int i;
  for (i = 0; i < n; i++)
   cout<<num[i]<<" ";
 cout<<"\n";
}
int main() {
  int num[N];
  int* ptr;
  int temp;
  int i, n, j;
  cin>>n;
  
  for (i = 0; i < n; i++)
  cin>>num[i];
    for (j = 1; j <= n; j++) {
    for (i = 0; i < n - 1; i++) {
      temp = num[i];
      num[i] = num[i + 1];
      num[i + 1] = temp;
      print(num, n);
    }
  }
  return 0;
}