class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int> > ans;
    
        if (nums.empty())
            return ans;
    
      sort(nums.begin(),nums.end());
    
        for (int i = 0; i < nums.size(); i++) {
        
            int target_3 = target - nums[i];
        
            for (int j = i + 1; j < nums.size(); j++) {
                int target_2 = target_3 - nums[j];            
                int front = j + 1;
                int back = nums.size() - 1;
            
                while(front < back) {
                    int two_sum = nums[front] + nums[back];
                    if (two_sum < target_2) front++;                
                    else if (two_sum > target_2) back--;
                
                    else {
                        vector<int> quad(4, 0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[front];
                        quad[3] = nums[back];
                        ans.push_back(quad);
                    
                        // Processing the duplicates of number 3
                        while (front < back && nums[front] == quad[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && nums[back] == quad[3]) --back;
                
                    }
                }
                // Processing the duplicates of number 2
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
            // Processing the duplicates of number 1
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;        
        }
    
        return ans;
    }
};