#include<bits/stdc++.h> 
using namespace std;


// https://leetcode.com/problems/count-common-words-with-one-occurrence/
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> one, two;
        int ans=0;
        for(auto i: words1){
            one[i]++;
        }
        for(auto i: words2){
            two[i]++;
        }
        for(auto j: words2){
            if(one[j] == 1 && two[j] == 1)
                ans++;
        }
        return ans;
    }

     int countWords2(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> one, two;
        for(int i = 0; i < words1.size(); i++)
            one[words1[i]]++;
        
        for(int i = 0; i < words2.size(); i++)
            two[words2[i]]++;
        
        int count = 0;
        for(auto x: one){
            if(x.second == 1){
                if(two[x.first] == 1)
                    count++;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    vector<string> words1{"leetcode","is","amazing","as","is"};
    vector<string> words2{"amazing","leetcode","is"};
    cout<<s.countWords(words1, words2)<<endl;
    return 0;
}