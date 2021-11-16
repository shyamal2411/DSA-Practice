#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/
// https://youtu.be/xrOwjoW0n8s
class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int low = 1, high = m * n;
        
        while(low<high){
            int mid = low + (high - low)/2;
            int cap = count(mid, m, n);
            if(cap >= k)
                high = mid;
            else
                low = mid + 1;
        }
        return high;
    }
    
private:
    int count(int mid, int m, int n){
        int count=0;
        for(int i = 1; i<=m; i++){
                int temp = min(mid/i, n);
            count += temp;
        }
        return count;
    }
};

int main(){
    Solution s;
    cout<<s.findKthNumber(3,3,5);
    // cout<<s.findKthNumber(2,3,6);
    return 0;
}