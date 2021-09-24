#include <bits/stdc++.h>
using namespace std;
void create();
int linearsearch();

void create() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
}

int linearsearch(int arr[], int n, int key) {   //most basic method to find an element and return it from any array.
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) 
      return i;    
	  }
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("error.txt", "w", stderr);
  freopen("output.txt", "w", stdout);
#endif

  int t = 1;
  cin >> t;
  while (t--) {
    int key;
    // cout<<"Enter key to be searched: ";
    void create();
    cin >> key;
    int linearsearch();
    cout << linearsearch() << endl;
    cout << "\n";
  }

  cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
  return 0;
}
