//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/793289635/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int sum = 0;
        int max = 0;
        
        for (int i = 0; i < accounts.size(); i++)
        {
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            
            if (sum > max)
                max = sum;
            
            sum = 0;
        }
        
        return max;
        
    }
};