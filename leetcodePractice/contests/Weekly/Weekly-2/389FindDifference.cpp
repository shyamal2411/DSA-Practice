#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/leetcode-weekly-contest-2/problems/find-the-difference/
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> hashmap;
        for(auto &c: s)
            hashmap[c]++;
        
        for(auto &c: t)
            hashmap[c]++;
        
        for(auto it: hashmap){
            if(it.second%2!=0)
                return it.first;
        }
        
        return '-';
    }

    //Better code quality
    char findTheDifference2(string s, string t) {
        unordered_map<char, int> hashMap;
        for (auto i : t) {
            hashMap[i]++;
        }
        for (auto i : s) {
            const bool found = hashMap.count(i);
            if (found) {
                hashMap[i]--;
            }
        }
        for (auto key : hashMap) {
            if (key.second) {
                return key.first;
            }
        }
        return '-';
    }

    //Sum of both strings
    char findTheDifference3(string s, string t) {
		int sum1 = 0;
		int sum2 = t[s.size()];
		for(int i = 0; i < s.length(); i++){
			sum1 += s[i];
			sum2 += t[i];
		}
		return char(abs(sum2 - sum1));
	}

    //Using XOR
    char findTheDifference4(string s, string t) {
		char res = t[s.size()];
		for(int i = 0; i < s.size(); i++){
			res ^= s[i] ^ t[i];
		}
		return res;
	}

};

int main(){
    Solution ss;
    string s = "abcd";
    string t = "abcde";
    cout<<ss.findTheDifference(s, t)<<endl;
    return 0;
}