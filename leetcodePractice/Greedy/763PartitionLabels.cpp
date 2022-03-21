#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/partition-labels/
// https://leetcode.com/problems/partition-labels/discuss/1868750/C%2B%2B-oror-Explained-Visually-oror-O(n)-oror-O(1)-oror-Two-Pointers
class Solution {
public:
    vector<int> partitionLabels(string s) {
		
        vector<int> endInd(26,0);
        
        for(int i = 0; i < s.length(); ++i)
            endInd[s[i] - 'a']  = i;
        
        vector<int> ans;
        int start = 0, end = 0;

        for(int i = 0; i < s.length(); ++i)
        {
		// whenever we get an character we check,
		// last index of that character
            end = max(end, endInd[s[i] - 'a']);
            
			// when current i.e i == end, add it to result
            if( i == end)
            {
                // all the characters of current partition included
                ans.push_back(i - start + 1);
				// update the start pointer for fresh start
                start = i + 1;
            }
        }
        return ans;
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