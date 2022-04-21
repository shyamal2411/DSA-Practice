#include<bits/stdc++.h> 
using namespace std;

class MyHashSet {
public:
    vector<int> mp;
    
    MyHashSet() {
        mp.resize(1e6+1, false);
    }
    
    void add(int key) {
        mp[key] = true;
    }
    
    void remove(int key) {
        mp[key] = false;
    }
    
    bool contains(int key) {
        return mp[key];
    }
};

int main(){
  MyHashSet* obj = new MyHashSet();
  obj->add(key);
  obj->remove(key);
  bool param_3 = obj->contains(key);
}