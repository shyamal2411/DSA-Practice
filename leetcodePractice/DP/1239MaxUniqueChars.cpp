#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
class Solution {
public:
    int maxLength(vector<string>& arr) {
        // Initialize results with an empty string
        // from which to build all future results
       vector<string> results = {""};
        int best = 0;
        for (string word : arr) {
            // We only want to iterate through results
            // that existed prior to this loop
            int resultsLen = results.size();
            for (int i = 0; i < resultsLen; i++) {
                // Form a new result combination and
                // use a set to check for duplicate characters
                string newRes = results[i] + word;
                unordered_set<char> newResSet(newRes.begin(), newRes.end());
                if (newRes.size() != newResSet.size())
                    continue;

                // Add valid options to results and
                // keep track of the longest so far
                results.push_back(newRes);
                best = max(best, (int)newRes.size());
            }
        }
        return best;
    }
};

int main()
{
    Solution s;
    vector<string> arr = {"un","iq","ue"};
    int ans = s.maxLength(arr);
    cout<<ans<<endl;
    return 0;
}