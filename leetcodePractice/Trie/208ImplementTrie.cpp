#include<bits/stdc++.h>
using namespace std;

 struct TrieNode{
        struct TrieNode* children[26];
        bool isEnd;
        
        TrieNode(){
            for(int i = 0; i< 26; i++){
                children[i] = NULL;
            }
            isEnd = false;
        }
    };
    

class Trie {
public:
   struct TrieNode* root;
    Trie() {
        root = new TrieNode();    
    }
    
    void insert(string word) {
        if(!root) return;
        
        struct TrieNode* ptrNode = root;
        
        for(int i = 0; i<word.size(); i++){
            int index = word[i] - 'a';
            if(ptrNode -> children[index] == NULL)
            {
                struct TrieNode* temp = new TrieNode();
                ptrNode->children[index] = temp;
            }
            ptrNode = ptrNode->children[index];
        }
        ptrNode ->isEnd=true;
        return;
    }
    
    bool search(string word) {
        if(!root) return false;
        
        struct TrieNode* ptrNode = root;
        for(int i = 0;i<word.size();i++){
            int index = word[i] - 'a';
            if(ptrNode->children[index]==NULL)
                return false;
            ptrNode = ptrNode->children[index];
        }
        if(ptrNode==NULL)
            return false;
        else
            return ptrNode->isEnd;
    }
    
    bool startsWith(string prefix) {
        if(root==NULL)
            return false;
        struct TrieNode* ptrNode = root;
        for(int i=0;i<prefix.size(); i++){
            int index =prefix[i] - 'a';
            if(ptrNode->children[index]==NULL)
                return false;
            ptrNode = ptrNode->children[index];
        }
        if(ptrNode==NULL)
            return false;
        else 
            return true;
    }
};

