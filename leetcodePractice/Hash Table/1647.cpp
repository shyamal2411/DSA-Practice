#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;

        for(auto i: s){
            mp[i]++;
        }

        set<int> st;
        int count = 0;
        
        for(auto it : mp){
            if(st.find(it.second) == st.end()){
                st.insert(it.second);
            }
            
            else{
                while(st.find(it.second) != st.end() && it.second != 0){
                    it.second--;
                    count++;
                }
                if(it.second != 0){
                    st.insert(it.second);
                }
            }
            
        }
        return count;
    }
};


int main(){
Solution ss;
// vector<int> vec = {};
return 0;
}