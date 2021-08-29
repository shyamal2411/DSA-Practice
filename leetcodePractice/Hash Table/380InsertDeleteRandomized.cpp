class RandomizedSet {
private:
    unordered_map<int, int> um;
    vector<int> vals;
    public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        srand((int)time(0));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        unordered_map<int, int>::iterator it=um.find(val);
        if(it==um.end()){
            um.insert(pair<int,int>(val,vals.size()));
            vals.push_back(val);
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
         unordered_map<int, int>::iterator it = um.find(val);
        if (it == um.end())   {
            return false;
        }
        int index=it->second;
        vals[index]=vals[vals.size()-1];
        um.find(vals[index])->second=index;
        vals.pop_back();
        um.erase(it);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int p=rand()%vals.size();
        
        return vals[p];
    }
};
