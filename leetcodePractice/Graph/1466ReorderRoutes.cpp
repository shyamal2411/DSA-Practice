#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int> visited(n);
        vector<vector<int>> adj(n),back(n);
        queue<int> q;
        q.push(0);
        int ans=0;
        
        for(auto c: connections)
        {
            adj[c[0]].push_back(c[1]);
            back[c[1]].push_back(c[0]);
        }
        
        while(!q.empty()){
            int current=q.front();
            q.pop();
            visited[current]=1;
            
            //change direction for all arrows facing out
            for(auto a: adj[current]){
                if(!visited[a]){
                    ans++;
                    q.push(a);
                }
            }
            
            //push other nodes so we visit everything
            for(auto b:back[current])
                if(!visited[b])
                    q.push(b);
        }
        return ans;
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> connections;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        connections.push_back({a,b});
    }
    Solution s;
    cout<<s.minReorder(n,connections)<<endl;
    return 0;
}