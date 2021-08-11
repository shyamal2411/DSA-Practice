#include<bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/asteroid-collision/
// https://leetcode.com/problems/asteroid-collision/discuss/904281/C%2B%2B-code-with-explanation-(beats-95-in-runtime)
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteriods) {
        int n = asteriods.size();
        stack<int> stk;
        for(int i = 0; i < n; i++) {
            if(asteriods[i] > 0 || stk.empty()) {
                stk.push(asteriods[i]);
            }
            else {
                while(!stk.empty() and stk.top() > 0 and stk.top() < abs(asteriods[i])) {
                    stk.pop();
                }
                if(!stk.empty() and stk.top() == abs(asteriods[i])) {
                    stk.pop();
                }
                else {
                    if(stk.empty() || stk.top() < 0) {
                        stk.push(asteriods[i]);
                    }
                }
            }
        }
		// finally we are returning the elements which remains in the stack.
		// we have to return them in reverse order.
        vector<int> res(stk.size());
        for(int i = (int)stk.size() - 1; i >= 0; i--) {
            res[i] = stk.top();
            stk.pop();
        }
        return res;
    }
};
//NOTES
//TIME COMPLEXITY- O(N)
// SPACE COMPLEXITY- O(N)

int main()
{
    Solution stk;
    vector<int> vec={-2,-1,1,2};
    vector<int> ans=stk.asteroidCollision(vec);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}