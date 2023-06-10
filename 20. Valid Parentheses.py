#LeetCode ID: alyliann
#Submission: https://leetcode.com/problems/valid-parentheses/submissions/968303084/

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if len(s) == 0:
            return True
        elif len(s) == 1:
            return False
  
        parentheses = []
        for char in s:
            if char == '(' or char == '{' or char == '[':
                parentheses.append(char)
            else:
                if len(parentheses) == 0:
                    return False
                else:
                    top_char = parentheses.pop(-1)
                    if (char == ')' and top_char != '(') or (char == '}' and top_char != '{') or (char == ']' and top_char != '['):
                        return False

        if len(parentheses) != 0:
            return False
        else:
            return True
