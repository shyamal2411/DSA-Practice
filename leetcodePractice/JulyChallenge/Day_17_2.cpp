class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        vector<int> res;  
        int n = arr.size();
        int zeros = 0; // number of zero at the end
        int ones = 0; // total number of one
        int nums=0;
       
        // get number of zero at the end
        for(int i = n - 1; i >= 0;i--)
        {
            if(arr[i] == 1) break;
            zeros++;
        }

        //  total number of one
        for(int i = 0;i < n;i++)
            if(arr[i] == 1)
               nums++;
        
        
        // if all elements in this array are 0, we divide the array at every place
        if(nums == 0)    
            return {0, n - 1};
    
        
        // the total number of 1 can't be divided by 3. return false.
        if(nums % 3) return {-1, -1};

        int count = nums / 3;
        string target;
                
        // check if the array can be split into 3 parts
        // each parts has (ones/3)'s 1, and has (zeros)'s 0 at at the end
        int i = 0;
        for(int k = 0; k < 3;k++)
        {
            string str;
            int one_nums = 0;
            int zero_nums = 0;
            for(;i < n; i++)
            {
                if(one_nums == count && zero_nums == zeros) break;
                if(arr[i] == 0)
                {
                    if(one_nums == count)
                    {
                        zero_nums++;
                    }
                    if(!str.empty()) // skip the leading 0.
                        str.push_back(arr[i]);
                }
                else if(arr[i] == 1)
                {
                    if(one_nums == count) // the number of 0 at the end is not match
                    {
                        return {-1, -1};
                    }
                    one_nums++;
                    str.push_back(arr[i]);
                }   
            }

            if(target.empty())
                target = str;
            
            else
            {
                if(target != str) return {-1, -1};  // current part and last part doesn't match             
            }
            if(k == 0) 
                res.push_back(i - 1); // push the index
            else if(k == 1)
                res.push_back(i);
        }
        
        return res;
    }
};
/*
At first, we calculate the total number of '1', and check if it can be divided by 3. 
Because each part must contain the same number of '1'.
If not, we just return { -1, -1 }.
Then, we calculate the number of '0' at the end of the array, which means that we won't stop until we find the first '1' at the end. 
If the array can be split into 3 parts, each part must has the same number of '0' as the end of the array.
Since we have already got the total number of '1' and the number of '0' at the end of the array,
we can check if the array can be divided into three parts with the exact number of 1 and 0 as we expected,
and whether the three parts are equal to each other ( pay attention that we should skip the leading zero ). 
If we can find the result, we record the index, and return it.

*/