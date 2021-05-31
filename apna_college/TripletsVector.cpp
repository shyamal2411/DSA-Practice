#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

vector<vi> triplets(vi arr, int targetSum) {
  int n = arr.size();
  sort(arr.begin(), arr.end());
  vector<vi> result;

  for (int i = 0; i <= n - 3; i++) {
    int j = i + 1;
    int k = n - 1;
    while (j < k) {
      int current_sum = arr[i];
      current_sum += arr[j];
      current_sum += arr[k];

      if (current_sum == targetSum){
          result.push_back({arr[i],arr[j],arr[k]});
          j++; k--;
      }
      else if(current_sum > targetSum){k--;}
      else{j++;}
    }
  }
  return result;
}

int main() {
  vi arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
  int s = 18;
  auto result = triplets(arr, s);
  for(auto itr: result){
      for(auto n: itr){
          cout<<n<<" ";
      }
    cout<<"\n";
  }
  return 0;
}