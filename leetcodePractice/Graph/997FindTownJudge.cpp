#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in(n+1, 0);
        vector<int> out(n+1, 0);
       /*
        1.The town judge trusts nobody.
        2.Everybody (except for the town judge) trusts the town judge.
        3.There is exactly one person that satisfies properties 1 and 2.*/ 
        if(trust.empty() && n == 1)
            return 1;
        
        /*this is the standard directed graph question, the town */
        for(auto edge: trust){
            out[edge[0]] ++;
            in[edge[1]]++;
        }
        
        for(int i = 0; i <= n; i++){
            if(out[i] == 0 && in[i] == n-1)
                return i;
        }
        
        return -1;
    }
};

int main(){
    Solution ss;
    vector<vector<int>> trust = {{1,2},{1,3},{2,3}};
    cout<<ss.findJudge(3, trust);
    return 0;
}

/*
Vector:
int ishani ={1,2,3,4,5,6,7,8,9,10};
vector<int> v={1,2,3,4,5,6,7,8,9,10};
vector<int> ishani;
int arr[a][b];
vector<vector<int>> vv;
*/