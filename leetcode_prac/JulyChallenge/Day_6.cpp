class Solution {
 public:
  int minSetSize(vector<int>& arr) {
    int n = arr.size();
    vector<int> v(100005);
    for (int i = 0; i < n; i++)
      v[arr[i]]++;

    sort(v.rbegin(), v.rend());  // go from largest element to smallest
    int total = 0;
    for (int i = 0; i < n; i++) {
      total += v[i];  // increment total everytime, until it reaches n/2 as
                      // stated in quetion
      if (total >= (n / 2))
        return (i + 1);
    }
    return n;
  }
};

//better map approach
class Solution {
public:
    int minSetSize(vector<int>& arr) {
     unordered_map<int, int> mp;
        
        //adding elements in map for key value pair
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        
        //greater int for keeping set in decreasing fashion
        multiset<int, greater<int>> s;
        
        
        for(auto n: mp)
            s.insert(n.second);
        
        int size=arr.size();
        int count=0;
        int ans=0;
        
        //keep on incrementing ans until count is more than half of the size
        for(auto it = s.begin(); count*2<size; it++)
        {
            ans++;
            count+=*it;
        }
        return ans;
    }
};