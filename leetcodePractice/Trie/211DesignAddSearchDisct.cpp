#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/design-add-and-search-words-data-structure/
class WordDictionary {
public:
    WordDictionary() {}
    
    void addWord(string word) {
        words[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for(auto s: words[word.size()]) if(isEqual(s, word)) return true;
        return false;
    }
    
private:
    unordered_map<int, vector<string>>words;
    
    bool isEqual(string a, string b){
        for(int i = 0; i < a.size(); i++){
            if(b[i] == '.') continue;
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};

int main(){
    WordDictionary wd;
    wd.addWord("bad");
    wd.addWord("dad");

}