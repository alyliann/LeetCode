//LeetCode ID: alyliann
//Submission: https://leetcode.com/submissions/detail/814634326/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        //create new vector of all same strings
        //alongside vector of each one's index sum
        //go through and make new vector of string with least index sum
        
        vector<string> repeatedStrings;     //holds strings that appear in both vectors
        vector<int> indexSums;      //holds strings in repeatedStrings's index sums
        
        for (int i = 0; i < list1.size(); i++){
            for (int j = 0; j < list2.size(); j++){
                if (list1[i] == list2[j]){
                    repeatedStrings.push_back(list1[i]);    //add repeated string to repeatedStrings vector
                    indexSums.push_back(i+j);
                }
            }
        }
        
        if (repeatedStrings.size() == 1)
            return repeatedStrings;
        else{
            int leastIndexSum = indexSums[0];
            vector<string> ans;    //holds strings whose index sums equal the least index sum
            for (int i = 1; i < repeatedStrings.size(); i++){
                if (indexSums[i] < leastIndexSum)
                    leastIndexSum = indexSums[i];
            }
            for (int i = 0; i < repeatedStrings.size(); i++){
                if (indexSums[i] == leastIndexSum){
                    ans.push_back(repeatedStrings[i]);
                }
            }
            return ans;
        }
        
        
    }
};
