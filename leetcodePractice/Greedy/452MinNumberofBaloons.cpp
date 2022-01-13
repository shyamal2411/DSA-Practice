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

//Better solution
class Solutionn {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        
        int start = points[0][0]; // start of first balloon  
        int end = points[0][1]; // end of first balloon
        
        int ans = 1; //  we need atleast 1 arrow to burst first balloon
        
        //for other balloons
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] <= end){ //if start of any balloon is before the end of a balloon, means they coincide
                start = max(start, points[i][0]); //find the start value more to the right
                end = min(end, points[i][1]); // find end value more to the left side for intersection
            }
            else{
                //else we know that current balloon doesn't coincide
                //so we set start and end to the current balloon and increase ans by one
                start = points[i][0];
                end = points[i][1];
                ans++;
            }
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7,12}};
    cout<<ss.findMinArrowShots(points);
    return 0;
}

/*
Case 1. Interescting overlapping intervals:
    I--------I
          I------I     
--------------------
>>        I--I
We update the ans.back() with intersecting area since an array here would hit them both.


Case 2. Intersecting included intervals:
    I--------I
       I--I
------------------
>>     I--I
We update the ans.back() with intersecting area since an array here would hit them both.


Case 3. Nonintersecting intervals:
    I--------I
                I--------I
 ------------------------------
>>  I--------I  I--------I
We push another interval in ans() since there needs to be 2 arrows now to hit them both.

There will never be a 4th case that the start of j is lesser than ans.back() since they are sorted.

*/