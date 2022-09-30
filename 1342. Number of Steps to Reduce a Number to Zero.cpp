//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/794289567/

class Solution {
public:
    int numberOfSteps(int num) {
        
        int numsteps = 0;
        
        while (num > 0)
        {
            if (num % 2 == 0)     //i is even
            {
                num /= 2;
                numsteps++;
            }
            
            else                //i is odd
            {
                num -= 1;
                numsteps++;
            }
        }
        
        return numsteps;
        
    }
};