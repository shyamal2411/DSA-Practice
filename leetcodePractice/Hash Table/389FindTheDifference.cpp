#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-the-difference/
class Solution {
public:
    char findTheDifference(string s, string t) {
        
//         Approach-1 using hashmap
         map<char, int> mp;
        char c;
        for(auto it: s){
            mp[it]++;
        }
        for(auto it: t){
            mp[it]++;
        }
       for(auto i: mp){
            if(i.second %2 != 0)
                return i.first;
        }
        return 'a';
        
//         TC: O(n)
//         SC: O(n)
        
        
// --------------------------------------------------------
//         Approach-2 sorting elements
        
		// sort(s.begin(), s.end());
		// sort(t.begin(), t.end());
		// int i = 0;
		// while(i < s.size()){
		// 	if(s[i] != t[i]){
		// 		return t[i];
		// 	}
		// 	i++;
		// }
		// return t[s.size()];

//         TC: O(n*logn)
//         SC: O(n) 

// --------------------------------------------------------

//         Appcoach-3 Sum Diff
		// int sum1 = 0;
		// int sum2 = t[s.size()];
		// for(int i = 0; i < s.length(); i++){
		// 	sum1 += s[i];
		// 	sum2 += t[i];
		// }
		// return char(abs(sum2 - sum1));

        // TC: O(n)
//         SC: O(1)
        
// --------------------------------------------------------

//         Approach-4 XOR Application
		// char res = t[s.size()];
		// for(int i = 0; i < s.size(); i++){
		// 	res ^= s[i] ^ t[i];
		// }
		// return res;
        
//         TC: O(n)
//         SC: O(1)
        
    }
};

int main(){
  Solution ss;
  string s = "abcd";
  string t = "abcde";
  cout<<ss.findTheDifference(s, t)<<endl;
  return 0;
}