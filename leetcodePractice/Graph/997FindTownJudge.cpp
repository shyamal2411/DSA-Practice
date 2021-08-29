class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(trust.empty() && n==1)
            return 1;

        //for counting out degree of node
        vector<int> out(n+1, 0);
        
        //for counting in degree of node
        vector<int> in(n+1, 0);
        
        //counts in-out degree 
        for(auto edge: trust){
            out[edge[0]]++;
            in[edge[1]]++;
        }
        
        //if node has outdegree==0 means node doesnot trust anyone
        //if indegree==n-1 means all other nodes trust this node except itself.
        for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
        return -1;
    }
};