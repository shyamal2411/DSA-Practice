#include <bits/stdc++.h>
using namespace std;

//Striver's graph series
class DFS_Solution
{
    
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> stk;
	    vector<int> vis(V, 0);
	    for(int i = 0;i<V;i++){
	        if(vis[i] == 0) //here i is each node
	        findtopo(i, vis, stk, adj);
	    }
	    vector<int> topo;
	    while(!stk.empty()){
	        topo.push_back(stk.top());
	        stk.pop();
	    }
	    return topo;
	}
	
	void findtopo(int node, vector<int> &vis, stack<int> &stk, 
	vector<int> adj[]){
	    vis[node] = 1;
	    for(auto it: adj[node]){
	        if(!vis[it])
	        findtopo(it, vis, stk, adj);
	    }
	    stk.push(node); //the only diff between basic dfs and topo sort
	}
};

class BFS_Solution{
public:
vector<int> topoSort(int n, vector<int> adj[]){
    queue<int> q;
    vector<int> indegree(n, 0);
    for(int i = 0;i<n;i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    for(int i = 0;i<n;i++){
        if(indegree[i] == 0)
        q.push(i);
    }
    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it] == 0)
                q.push(it);
            }
    }
            return topo;
        }
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}



int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        DFS_Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
} 