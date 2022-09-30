//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/812138514/

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        
        for (int i = 0; i < logs.size(); i++){
            if ((logs[i] != "../") && (logs[i] != "./"))
                ans++;      //further from main folder by 1
            else if (logs[i] == "../" && ans != 0)
                ans--;      //closer to main folder by 1
        }
        
        return ans;
    }
};
