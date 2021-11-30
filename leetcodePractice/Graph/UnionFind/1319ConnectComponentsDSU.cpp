#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/number-of-operations-to-make-network-connected/
class Solution {
public:

    //Find parent
    int find(int x, vector<int> &parent){
        if(parent[x] == x) 
            return parent[x];
        return parent[x] = find(parent[x], parent);
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        //Initializing parent 
        vector<int> parent(n);
        for(int i = 0; i<n;i++){
            parent[i] = i;
        }
        //to count components
        int components = 0;
        
        for(auto &i: connections){
            int x = find(i[0], parent);
            int y = find(i[1], parent);
        
        // if parent are same that means they were connected and
        // now again they are being connected so continue
        if(x == y)
            continue;
        
        // parents not same, increment component
        else{
            parent[y] = x;
            components++;
        }
      }
        //We know to connect n computers we need n-1 cables so if connections.size() < n-1 return -1
		//else required - already connected and i.e. (n-1) - (components)
      return connections.size() < n-1 ? -1 : n-1-components;  
    }
};

int main(){
    Solution s;
    vector<vector<int>> connections = {{0,1},{0,2},{0,3},{1,2}};
    cout<<s.makeConnected(4, connections);
    return 0;
}