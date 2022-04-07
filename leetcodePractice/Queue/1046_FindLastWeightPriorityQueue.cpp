#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/last-stone-weight/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq(stones.begin(), stones.end());
        while(pq.size() > 1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(x != y)
                pq.push(y-x);
        }
        return pq.empty() ? 0 : pq.top();
    }
};

// https://leetcode.com/problems/last-stone-weight/discuss/1921100/Simple-easy-c%2B%2B-solution

int main(){
    vector<int> stones = {2,7,4,1,8,1};
    Solution s;
    cout<<s.lastStoneWeight(stones)<<endl;
    return 0;
}