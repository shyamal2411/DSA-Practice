#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/roman-to-integer/
// https://www.youtube.com/watch?v=dlATMslQ6Uc
class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int num=0;
        for(int i=0;i<n;i++){
            if((i<n-1) && (convert(s[i])<convert(s[i+1])))
                num-=convert(s[i]);
            else
                num+=convert(s[i]);
        }
        return num;
    }
    int convert(char c){
        switch(c){
        case 'I': return 1;
        case 'V':	return 5;
        case 'X':	return 10;
        case 'L':	return 50;
        case 'C':	return 100;
        case 'D':	return 500;
        case 'M':	return 1000;
        default:	return 0;
        }
    }

    int romanToInt2(string s)
    {
        unordered_map<char, int> mp;
        mp.insert({'I', 1});
        mp.insert({'V', 5});
        mp.insert({'X', 10});
        mp.insert({'L', 50});
        mp.insert({'C', 100});
        mp.insert({'D', 500});
        mp.insert({'M', 1000});

        int cont_1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] < mp[s[i + 1]])
            {
                cont_1 += mp[s[i + 1]] - mp[s[i]];
                i++;
            }
            else
            {
                cont_1 += mp[s[i]];
            }
        }
        return cont_1;
    }
};


int main(){
    Solution s;
    cout<<s.romanToInt("MCMXCIV")<<endl;
    return 0;
}