//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/794283976/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> fizzBuzz;
        
        for (int i = 1; i <= n; i++)
        {
            if ((i % 3 == 0) && (i % 5 == 0))
            {
                fizzBuzz.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                fizzBuzz.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                fizzBuzz.push_back("Buzz");
            }
            else
            {
                fizzBuzz.push_back(to_string(i));
            }
            
        }
        
        return fizzBuzz;
    }
};