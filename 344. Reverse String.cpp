//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/799023466/

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp;
       for (int i = s.size()-1; i >= 0; i--){
           temp.push_back(s[i]);
       }
        s = temp;
    }
};
