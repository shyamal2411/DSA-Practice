//NOT AVAILABLE ON LEETCODE.
//QUESTION AVAILABLE ON CODESTUDIO BY CODING NINJAS.

// https://www.codingninjas.com/codestudio/problems/implement-trie_1387095?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *links[26]; 
    int cntEndWith = 0;
    int cntPrefix = 0; 
    
    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL); 
    }
    Node* get(char ch) {
        return links[ch-'a']; 
    }
    void put(char ch, Node* node) {
        links[ch-'a'] = node; 
    }
    void increaseEnd() {
        cntEndWith++;  
    }
    void increasePrefix() {
        cntPrefix++; 
    }
    void deleteEnd() {
        cntEndWith--; 
    }
    void reducePrefix() {
        cntPrefix--; 
    }
    int getEnd() {
        return cntEndWith; 
    }
    int getPrefix() {
        return cntPrefix; 
    }
}; 
class Trie{
private: Node *root; 
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Node(); 
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *node = root;
        for(int i = 0;i<word.length();i++) {
            if(!node->containsKey(word[i])) {
                node->put(word[i], new Node()); 
            }
            node = node->get(word[i]); 
            node->increasePrefix(); 
        }
        node->increaseEnd(); 
    }
    
    int countWordsEqualTo(string &word){
        Node* node = root;
        for(int i = 0;i<word.length();i++) {
            if(node->containsKey(word[i])) {
                node = node->get(word[i]);
            }
            else {
                return 0; 
            }  
        }
        return node->getEnd(); 
    }

    int countWordsStartingWith(string &word){
        Node* node = root;
        for(int i = 0;i<word.length();i++) {
            if(node->containsKey(word[i])) {
                node = node->get(word[i]);
            }
            else {
                return 0; 
            }  
        }
        return node->getPrefix(); 
    }

    void erase(string &word){
        Node* node = root;
        for(int i = 0;i<word.length();i++) {
            if(node->containsKey(word[i])) {
                node = node->get(word[i]);
                node->reducePrefix(); 
            }
            else {
                return;
            }
        }
        node->deleteEnd(); 
    }
};

int main(){
 Trie trie;
    trie.insert("apple");
    cout<<trie.insert("apple")<<endl;
    cout<<trie.countWordsEqualTo("app")<<endl;
    cout<<trie.countWordsStartingWith("app")<<endl;
    trie.insert("app");
    cout<<trie.erase("app")<<endl;
    return 0;
}