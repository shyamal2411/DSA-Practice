#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    
int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size(); 
    //  USING HASHMAP
//         int start = matrix[0][0], end = matrix[n-1][n-1];
    
//         unordered_map<int, int> mp;
//         //inserting elements in map
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++){
//                 mp[matrix[i][j]]++;
//             }
//         }
        
//         for(int i = start; i <= end; i++){
//             if(mp.find(i) != mp.end()){
//                 for(int j = 0; j < mp[i]; j++){
//                     k--;
//                     if(k == 0) return i;
//                 }
//             }    
//         }        
//         return -1;
        
//         PRIORITY QUEUE
        // priority_queue<int> pq;
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         pq.push(matrix[i][j]);
        //         if(pq.size() > k) 
        //             pq.pop();
        //     }
        // }
        // return pq.top();
        
//         USING BINARY SEARCH
        int i = matrix[0][0], j = matrix[n-1][n-1];
        
        while(i < j){
            int mid = i + (j-i) / 2;
            int position = solve(matrix, mid);
            if(position < k) 
                i = mid + 1;
            else
                j = mid;
        }
        return i;
    }
    
    int solve(vector<vector<int>> &matrix, int mid){
        int count = 0; int n = matrix.size();
        int i = n - 1, j = 0;
        
        while(i >= 0 && j < n){
            if(matrix[i][j] > mid)
                i--;
            else{
                count += (i+1);
                j++;
            }
        }
        return count;
    }
};

int main(){
    Solution ss;
    vector<vector<int>> vec = {{1,5,9},{10,11,13},{12,13,15}};
    int k = 8;
    cout<<ss.kthSmallest(vec, k)<<endl;
return 0;
}