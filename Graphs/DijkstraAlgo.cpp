#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m, source;
    cin>>n>>m;
    vector<pair<int, int>> g[n+1]; // 1-indexed adj list of the graph
    int a,b, wt;
    cin>>a>>b>>wt;
    for(int i=0;i<m;i++){
        g[a].push_back(make_pair(b,wt));
        g[b].push_back(make_pair(a,wt));
    }
    cin>>source;

    // Dijkstra's algorithm
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // min-heap of pairs of <distance, from>
    vector<int> distTo(n+1, INT_MAX); //1-indexed array for calculating shortest path

    distTo[source] = 0;
    pq.push(make_pair(0, source)); // these are the pair of (dist, from)

    while(!pq.empty()){
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        vector<pair<int, int>>::iterator it;
        // for(it = g[prev].begin(); it != g[prev].end(); it++){
            for(auto it: g[prev]){
                int next = it.first;
                int nextDist = it.second;
                if(distTo[next]> dist + nextDist){
                    distTo[next] = dist + nextDist;
                    pq.push(make_pair(distTo[next], next));
                }
        }
    }
    cout<<"The distances from the source,"<<source<<" are: "<<endl;
    for(int i=1;i<=n;i++)
    {cout<<distTo[i]<<" ";}
    cout<<endl;
    return 0; 
}
