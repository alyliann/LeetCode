//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/815285378/

class Solution {
public:
    bool isPalindrome(string s) {
        
        char c;
        string noSpaces;
        string backwards;
        
        //make noSpaces equal to s without spaces and lowercase instead of uppercase letters
        for (int i = 0; i < s.length(); i++){
            c = s[i];
            if (isalpha(c) || isdigit(c)){
                if (isupper(c))
                    c = tolower(c);
                noSpaces += c;
            }
        }
        
        //make backwards equal noSpaces backwards
        for (int i = noSpaces.length()-1; i >= 0; i--){
            c = noSpaces[i];
            backwards += c;
        }
        
        //compare backwards and noSpaces
        if (noSpaces == backwards)
            return true;
        else
            return false;
        
    }
};
