#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {
        int n = cardpoints.size(); int size = n-k; //size of sliding window or the number of remaining  card
        int maxx = INT_MAX;
        int total = 0, cursum = 0; //total: total sum, cursum is the sum of sliding window
        int j = 0;
        
        for(int i = 0; i < n; i++){
            total += cardpoints[i];
            cursum += cardpoints[i];
            
            //everytime our window size reach its limit ie (n-k), remove first ele from window
            if(i >= size - 1){
                maxx = min(maxx, cursum);
                cursum -= cardpoints[j++];
            }
        }
        if(k == n) return total;
        return total - maxx;
    }
};

int main(){
Solution ss;
vector<int> vec = {1,2,3,4,5,6,1};
cout<<ss.maxScore(vec, 2)<<endl;
return 0;
}