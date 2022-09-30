//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/801251489/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1)
            return true;
        for (long i = 0; i <= num/2; i++){
            if (i*i == num)
                return true;
        }
        return false;
    }
};