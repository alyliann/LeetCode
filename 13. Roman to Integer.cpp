//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/804005352/

class Solution {
public:
    int romanToInt(string s) {
        
        int romanInt = 0;
        
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'M'){
                if (i != 0 && s[i-1] == 'C')
                    romanInt += 900;
                else
                    romanInt += 1000;
            }
            else if (s[i] == 'D'){
                if (i != 0 && s[i-1] == 'C')
                    romanInt += 400;
                else
                    romanInt += 500;
            }
            else if (s[i] == 'C' && (s[i+1] != 'M' && s[i+1] != 'D')){
                if (i != 0 && s[i-1] == 'X')
                    romanInt += 90;
                else
                    romanInt += 100;
            }
            else if (s[i] == 'L'){
                if (i != 0 && s[i-1] == 'X')
                    romanInt += 40;
                else
                    romanInt += 50;
            }
            else if (s[i] == 'X' && (s[i+1] != 'C' && s[i+1] != 'L')){
                if (i != 0 && s[i-1] == 'I')
                    romanInt += 9;
                else
                    romanInt += 10;
            }
            else if (s[i] == 'V'){
                if (i != 0 && s[i-1] == 'I')
                    romanInt += 4;
                else
                    romanInt += 5;
            }
            else if (s[i] == 'I' && (s[i+1] != 'X' && s[i+1] != 'V'))
                romanInt += 1;
        }
        
        return romanInt;
    }
};
