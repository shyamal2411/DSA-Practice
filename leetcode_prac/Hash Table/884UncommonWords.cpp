class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string, int> count;
        
        //to break the words when space comes
        istringstream iss (s1 + " " + s2);
        while(iss>> s1)
            count[s1]++;//input these words in map
        
        vector<string> ans;
        for(auto itr: count)
            if(itr.second==1) // if the word count of any word is just 1, means it appeared in 1 of the strs only(not both), so add it in vector.
                ans.push_back(itr.first);
        
        return ans;//return the bunch of words occuring only once.
    }
};