#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles/
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        unordered_map<double, double> mp;
        long long ans=0;
        
        //go from (n-1) to 0 so we are aware of ratios which occured after current index
        for(int i=n-1;i>=0;i--){
            double ratio =(double)rectangles[i][0]/(double)rectangles[i][1];
            
            //if ratio is seen before, increment it
                if(mp.find(ratio)!=end(mp))
                    ans+=mp[ratio];
            
            //Increment ratio count
            mp[ratio]++;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> rectangles = {{4,8},{3,6},{10,20},{15,30}};
    // vector<vector<int>> rectangles = {{2,3},{3,2},{1,1}};
    cout<<s.interchangeableRectangles(rectangles)<<endl;
    return 0;
}