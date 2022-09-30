//Author: Alysa Vega
//Submission: https://leetcode.com/submissions/detail/804612118/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs[0].length() == 0)
            return "";
        
        int minLength = strs[0].length();
        for (int i = 1; i < strs.size(); i++){  //find shortest string's length
            if (strs[i].length() < minLength)
                minLength = strs[i].length();
        }
        
        string prefix = "";
        char c;
        
        for (int i = 0; i < minLength; i++){
            c = strs[0][i];
            for (int j = 0; j < strs.size(); j++){
                if (strs[j][i] != c){
                    return prefix;
                }
            }
            prefix += c;
        }
        
        return prefix;
    }
};
