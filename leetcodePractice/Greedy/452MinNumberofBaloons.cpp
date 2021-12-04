#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

// We just neeed to find the intersection between the intervals and count those intersections 
// if there is no intersection then count will be incremented.
class Solution {
public:
   static bool comp(vector<int>& vec1, vector<int>& vec2)
    {
	    return vec1[1] < vec2[1];
    }
	
	int findMinArrowShots(vector<vector<int>>& points) 
    {
		if (points.size() <= 1) 
			return points.size();
			
		sort(points.begin(), points.end(), comp);

		int minNumArrow = 0;
		int tmp = points[0][1];

		for (int i = 1; i < points.size(); i++)
		{
			minNumArrow += points[i][0] > tmp;
			tmp = points[i][0] > tmp ? points[i][1] : tmp;
		}

		return minNumArrow + 1;
    }

};

int main(){
    Solution ss;
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7,12}};
    cout<<ss.findMinArrowShots(points);
    return 0;
}