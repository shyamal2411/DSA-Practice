#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

struct Job {
  char id;
  int dead;
  int profit;
};

bool comparision(Job a, Job b) {
  return (a.profit > b.profit);
}

void printJob(Job arr[], int n) {
  sort(arr, arr + n, comparision);
  int res[n];
  bool slot[n];

  f(i, 0, n) slot[i] = false;

  f(i, 0, n) {
    for (int j = min(n, arr[i].dead) - 1; j >= 0; j--) {
      if (slot[j] == false) {
        res[j] = i;
        slot[j] = true;
        break;
      }
    }
  }
  f(i, 0, n) {
    if (slot[i])
      cout << arr[res[i]].id << " ";
  }
}

int main() {
  // int n;
  // cin>>n;
  // Job arr[n][n][n];
  // for (int i=0;i<n;i++)
  // {
  //     cin>>arr[i][i][i];
  // }
  Job arr[] = {
      {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Max profit jobs\n:";
  printJob(arr, n);
  return 0;
}