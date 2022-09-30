//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/794772385/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> twoSum;
        
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    twoSum.push_back(i);
                    twoSum.push_back(j);
                    return twoSum;
                }
            }
        }
        
        return twoSum;
        
    }
};
