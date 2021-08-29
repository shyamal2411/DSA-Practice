#include<bits/stdc++.h>
using namespace std;
//  https://leetcode.com/problems/map-sum-pairs/

class MapSum {
public:
   map<string, int> count;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        count[key]=val;
    }
    
    int sum(string prefix) {
        int ans=0;
        for(map<string, int>::iterator i=count.begin();i!=count.end();i++){
            if(i->first.find(prefix)==0)
                ans+=i->second;
        }
        return ans;
    }
};

int main()
{
    MapSum obj;
    obj.insert("apple", 3);
    obj.insert("app", 2);
    cout<<obj.sum("ap");
    return 0;
}