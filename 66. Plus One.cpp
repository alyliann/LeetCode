//Author: Alysa Vega
//Submission: https://leetcode.com/submissions/detail/811760167/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int size = digits.size();
        
        int i = size - 1;
        
        while(i >= 0){
            if (digits[i] < 9){
                digits[i]++;
                return digits;
            }
            else       //digits[i] == 9
                digits[i] = 0;
            i--;
        }
        
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};
