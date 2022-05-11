#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/lru-cache/
// https://youtu.be/xDEuM5qa0zg LRU Concept Explanation
// https://youtu.be/Xc4sICC8m4M Code Implementation
class LRUCache {
public:
    class node{
        public:
        int key, val;
        node* next; 
        node* prev;
        node(int _key, int _val){
            key = _key;
            val = _val;
            }        
    };
    
    node* head = new node(-1, -1);
    node* tail = new node(-1, -1);
    
    int cap;
    unordered_map<int, node*> m;
    
    LRUCache(int capacity) {
        cap = capacity;
        head -> next = tail;
        tail -> prev = head;
    }
    
    void addnode(node* newNode){
        node* temp = head -> next;
        newNode -> next = temp;
        newNode -> prev = head;
        head -> next = newNode;
        temp -> prev = newNode;
    }
    
    void deletenode(node* delNode){
        node* delprev = delNode-> prev;
        node* delnext = delNode -> next;
        delprev -> next = delnext;
        delnext -> prev = delprev;
    }
    
    
    int get(int key) {
        if(m.find(key) != m.end()){
            node* ansNode = m[key];
            int ans = ansNode -> val;
            m.erase(key);
            deletenode(ansNode);
            addnode(ansNode);
            m[key] = head -> next;
            return ans;
        }
        return -1; //if we don't get any key value pair in the map, then return -1
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            node* existingNode = m[key];
            m.erase(key);
            deletenode(existingNode);
        }
        if(m.size() == cap){
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key, value));
        m[key] = head -> next;
    }
};
 

int main(){

    int capacity = 3, key = 2, value = 3;
  LRUCache* obj = new LRUCache(capacity);
  int param_1 = obj->get(key);
   obj->put(key,value);

}