#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
// https://leetcode.com/contest/weekly-contest-259/problems/final-value-of-variable-after-performing-operations/
//WRONG SOLUTION. GIVES COMPILATION ERROR, BUT I THINK THE LOGIC IS CORRECT.
/*class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]== '+' || operations[i+1]=='+')
                ans++;
            else 
                ans--;
        }
        return ans;
    }
};*/

class RightSolution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="X++")
                ans++;
            else if(operations[i]=="++X")
                ans++;
            else if(operations[i]=="X--")
                ans--;
            else if(operations[i]=="--X")
                ans--;            
        }
        return ans;
    }
    
    int finalValueAfterOperations2(vector<string>& operations) {
        int x = 0;
        for (auto op : operations) 
            x = op[1] == '-'? x - 1 : x + 1;
        return x;
    }

};

int main() {
    vector<string> operations;
    operations.push_back("X++");
    operations.push_back("X--");
    operations.push_back("++X");
    operations.push_back("--X");
    // Solution s;
    // cout<<s.finalValueAfterOperations(operations)<<endl;
    RightSolution r;
    cout<<r.finalValueAfterOperations(operations)<<endl;
    return 0;
}