//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/820312710/

class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);
        string reversed_num;
        
        if (x >= 0){
            for (int i = num.length()-1; i >= 0; i--){
                reversed_num += num[i];
            }
        }
        else{
            reversed_num += num[0];
            for (int i = num.length()-1; i > 0; i--){
                reversed_num += num[i];
            }
        }
        
        if (stol(reversed_num) > pow(2, 31) - 1 || stol(reversed_num) < 0 - pow(2,31)){   //if reversed_num is out of range of int
            return 0;
        }
        else
            return stoi(reversed_num);
        
    }
};
