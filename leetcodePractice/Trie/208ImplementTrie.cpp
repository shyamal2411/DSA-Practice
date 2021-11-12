#include<bits/stdc++.h>
using namespace std;



struct Node {
    Node *links[26]; 
    bool flag = false; 
    
    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL); 
    }
    Node* get(char ch) {
        return links[ch-'a']; 
    }
    void put(char ch, Node* node) {
        links[ch-'a'] = node; 
    }
    void setEnd() {
        flag = true; 
    }
    bool isEnd() {
        return flag; 
    }
}; 
class Trie {
private:
    Node *root; 
public:

    Trie() {
        root = new Node(); 
    }
    
    /** Inserts a word into the trie. */
    //Time-O(Length of the word)
    void insert(string word) {
        Node *node = root;
        for(int i = 0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                node->put(word[i], new Node()); 
            }
            node = node->get(word[i]); 
        }
        node->setEnd(); 
    }
    
    /** Returns if the word is in the trie. */
    //Time-O(length)
    bool search(string word) {
        Node *node = root; 
        for(int i = 0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                return false; 
            }
            node = node->get(word[i]); 
        }
        // if(node->isEnd()) {
        //     return true; 
        // }
        // return false; 
        return node->isEnd(); 
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    //Time-O(length)
    bool startsWith(string prefix) {
        Node *node = root; 
        for(int i = 0;i<prefix.size();i++) {
            if(!node->containsKey(prefix[i])) {
                return false; 
            }
            node = node->get(prefix[i]); 
        }
        return true;  
        // The only diff between search and startswith is this return part
    }
};

int main(){
    Trie trie;
    trie.insert("apple");
    cout<<trie.search("apple")<<endl;
    cout<<trie.search("app")<<endl;
    cout<<trie.startsWith("app")<<endl;
    trie.insert("app");
    cout<<trie.search("app")<<endl;
    return 0;
}