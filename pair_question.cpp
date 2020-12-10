#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)

bool compare(pair<int,int> p1,pair<int,int> p2){

    return p1.first < p2.first;

}

int main() {
  int n, i, t, count = 0, j;
  int arr[] = {10, 20, 30, 40, 50, 80};
  n = sizeof(arr) / sizeof(arr[0]);
  vector<pair<int, int> > v;
  for (i = 0; i < n; i++) {
      pair<int,int> p;
      v.push_back(make_pair(arr[i],i));
  }

sort(v.begin(),v.end(),compare);
for(i=0;i<v.size();i++)
{
    arr[v[i].second]=i;
}
for (i = 0; i < v.size(); i++) {
  cout<<arr[i]<<" ";
}
  return 0;
}