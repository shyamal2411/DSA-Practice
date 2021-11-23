#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/partition-labels/
class Solution {
public:
   // Greedy approach
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> ans;
        
        if(n == 0) return ans;
        
        // find the last position of each letter in the string.
        vector<int> last_pos (26, -1);
        
        for(int i=n-1; i>=0; --i) {
            if(last_pos[s[i]-'a'] == -1)
                last_pos[s[i]-'a'] = i;
        }
        
        // minp is the min pos we need to consider in a partition.
        // plen is the length of the partition.
        int minp = -1, plen = 0;
        
        for(int i=0; i<n; ++i) {
            int lp = last_pos[s[i]-'a'];
            // Extend the current partition to consider this character's last pos.
            minp = max(minp, lp);
            // Increase the len of this partition.
            ++plen;
            
            // if the current pos of a character equals
            // the min pos we need to enclose in the current partition,
            // then we have reached the end of this partition.
            if(i == minp) {
                // store the partition's len and reset the variables.
                ans.push_back(plen);
                minp = -1;
                plen = 0;
            }
        }
        
        return ans;
    }
};
class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> last(26,0);
        for(int i=0;i<S.size();i++) 
            last[S[i]-'a']=i;
        
        vector<int> res;
        int j=0,k=0;
        for(int i=0;i<S.size();i++) {
            j = max(j, last[S[i]-'a']);
            if(i==j) {
                res.push_back(i-k+1);
                k=i+1;
            }
        }
        return res;
    }
};

/*We get maximum number of partition if we divide the string whenever you find smallest possible partition from the left.
 That's because letters in a partition dose not appear in other partitions so that dose not affect futher partitioning.
To find out partionable position, we precaculate last appeared position for all letter in string.
Then, traversing the string character by character, we maintain two variable. Variable j keeps maximum of last appeared position for all letter in the partition. 
We'll update j everytime we meet new character. Variable k keeps start position of the partition. 
If j==i occurs at some point, meaning all letter in current partition [k, i] 
do not appear later and only appear in current partition, then we'll append length of current partition [k, i] to result.*/

int main(){
    Solution ss;
    string s = "ababcbacadefegdehijhklij";
    vector<int> ans = ss.partitionLabels(s);
    for(int i=0; i<ans.size(); ++i)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}