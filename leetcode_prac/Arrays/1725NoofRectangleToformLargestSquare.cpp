
//cpp program to execute above code
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int,int> maxsquarelen;
        int maxlen=INT_MIN;
       
        for(auto rectangle : rectangles){
           
            maxsquarelen[min(rectangle[0],rectangle[1])]++;
            
            maxlen = max(maxlen,min(rectangle[0],rectangle[1]));//store the maxpossible length of square formed
        }
        
        return maxsquarelen[maxlen];
    }
};

int main()
{
    vector<vector<int>> rectangles;
    rectangles.push_back({1,2});
    rectangles.push_back({2,3});
    rectangles.push_back({5,3});
    rectangles.push_back({5,4});
    rectangles.push_back({1,1});
    rectangles.push_back({3,2});
    rectangles.push_back({4,1});
    rectangles.push_back({6,1});
    rectangles.push_back({7,1});
    rectangles.push_back({8,1});
    Solution obj;
    cout<<obj.countGoodRectangles(rectangles)<<endl;
    return 0;
}