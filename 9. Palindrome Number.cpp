//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/795080310/

class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
            return false;
        
        string num = to_string(x);
        
        for (int i = 0; i < num.size()/2; i++)
        {
            if (num[i] != num[num.size()-i-1])
                return false;
        }
        
        return true;
        
    }
};
