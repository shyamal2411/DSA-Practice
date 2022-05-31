#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
class Solution {
public:
  bool hasAllCodes(string s, int k) {
    unordered_set<string> got;
    int need = 1 << k;
    for (int i = k; i < s.size(); i++) {
      string a = s.substr(i - k, k);
      if (!got.count(a)) {
        got.insert(a);
        need--;
        if (need == 0) return true;
      }
    }
    return false;
  }
};

int main(){
    Solution ss;
    cout << ss.hasAllCodes("00110110", 2) << endl;
    return 0;
}