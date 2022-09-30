//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/806288077/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> smallerNumbersThanCurrent;
        for (int i = 0; i < nums.size(); i++)
            smallerNumbersThanCurrent.push_back(0);
        
        for (int i = 0; i < nums.size(); i++){      //for each int in nums vector
            for (int j = 0; j < nums.size(); j++){          //same
                if (nums[j] < nums[i])
                    smallerNumbersThanCurrent[i]++;
            }
        }
        
        return smallerNumbersThanCurrent;
    }
};