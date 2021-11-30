#include<bits/stdc++.h> 
using namespace std;


// https://leetcode.com/problems/largest-rectangle-in-histogram/
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // this problem should be solved using stack .
        /* whenever you see a monotonic increase in the input which      
		would yield  the answer closest to 
		required you gotta understand that you should
		use  a stack datastructure to  calculate the answer*/
        // so let's begin by creating a stack and ans that we return 
        stack<int> st;
        int ans=0;
        //just to make our code understand better i'm adding 0 at the end of
        //heights
        heights.push_back(0);
        /* how do you add the elements to the stack ? mmmmmm? okay 
		let us think 
        way ,lets add all the ascending order elements to the stack so that 
		it
        looks like climbing steps .coz in that way we can have atleast the 
		min
        size step * number of elements in the stack .if we encounter any 
		bar with         lesser height than the top element of the stack ,we 
		will compute the 
        existing stack element area and pop the top element just to check 
		if the 
        current top < bar height ,if it is so ..add it to the stack ..i think it        
		will be more clearer if you go through the code*/
         //very important note .. we are adding indices ..not the values
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                //here we are checking if stack is empty or if we encounter 
				// any 
                // number that doesn't satisfy our stack filling property
                int top=heights[st.top()];
                st.pop();
                int ran=st.empty()?-1:st.top();
                //this is to check if stack is empty, if so we will just take the                 //index
                ans=max(ans,top*(i-ran-1));
                // this is just to take the max area covered so far
            }
            st.push(i);
            //we push into the stack as long as it satsifies our stack condition
        }
        return ans;
        // i know it's not a very clever explanation ..but i tried to explain 
        //whatever i can ...HAPPY CODING!!
    }
};

int main(){
    Solution s;
    vector<int> v={2,1,5,6,2,3};
    cout<<s.largestRectangleArea(v);
    return 0;
}