#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/design-hashmap/
class MyHashMap {
public:
    vector<int> mp;
    int size;
    
    MyHashMap() {
        size=0;    
    }
    
    void put(int key, int value) {
        if(key>=size)
        {
            size=key+1;
            mp.resize(size, -1);
        }
        mp[key]=value;
    }
    
    int get(int key) {
        if(key>=size)
            return -1;
        else
            return mp[key];
    }
    
    void remove(int key) {
        if(key>=size)
            return;
        
        mp[key]=-1;
    }
};