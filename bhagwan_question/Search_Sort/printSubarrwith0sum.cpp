#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

vector<pair<int, int>> findsubarr(int arr[], int n) {
    unordered_map<int, vector<int>> mp;
    vector<pair<int, int>> out;
    int sum=0;

    f(i, 0, n) {
        sum+=arr[i];
        if(sum==0){
            out.push_back(make_pair(0, i));

            if(mp.find(sum)==mp.end()){
                vector<int> v=mp[sum];
                for(auto it=v.begin();it!=v.end();it++)
                    out.push_back(make_pair(*it, i));
            }
            mp[sum].push_back(i);
        }
        return out;
    }
}
void print(vector<pair<int, int>> out)
{
    for (auto it = out.begin(); it != out.end(); it++)
        cout << "Subarray found from Index " <<
            it->first << " to " << it->second << endl;
}

int main(){
  int arr[] = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    vector<pair<int, int> > out = findsubarr(arr, n);
      if (out.size() == 0)
        cout << "No subarray exists";
    else
        print(out);
return 0;
}