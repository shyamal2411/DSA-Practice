#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/interval-list-intersections/
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) {
        if(first.size() == 0 || second.size() == 0)
            return {};
        
        int i=0, j=0;
        vector<vector<int>> output;
        
        while(i!=first.size() && j!=second.size()){
            
            int start = max(first[i][0], second[j][0]);
            int end = min(first[i][1], second[j][1]);

            if(end - start >= 0)
                output.push_back({start, end});
        
        end == first[i][1] ? i++ : j++;
        }
        return output;
    }
 
 //APPROACH-2

    vector<vector<int>> intervalIntersection2(vector<vector<int>>& first, vector<vector<int>>& second) {
    vector<vector<int>> res;
    for (auto i = 0, j = 0; i < first.size() && j < second.size(); first[i][1] < second[j][1] ? ++i : ++j) {
        auto start = max(first[i][0], second[j][0]);
        auto end = min(first[i][1], second[j][1]);
        if (start <= end) 
            res.push_back({start, end});
    }
    return res;    
}
};

int main(){
    Solution s;
    vector<vector<int>> first = {{0,2},{5,10},{13,23},{24,25}};
    vector<vector<int>> second = {{1,5},{8,12},{15,24},{25,26}};
    vector<vector<int>> output = s.intervalIntersection2(first, second);
    for(auto first : output)
        cout<<first[0]<<" "<<first[1]<<endl;
    return 0;
}