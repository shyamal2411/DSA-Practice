class Solution {
public:
    int heightChecker(vector<int>& heights) {
           int last= heights.size();
           vector <int> sortarr;
           sortarr = heights;
           sort(sortarr.begin(), sortarr.end());
           int count=0;
        
        for(int i=0; i<last; i++)
        {
            if(heights[i]!= sortarr[i])
                count++;
        }
        return count;
    }
};